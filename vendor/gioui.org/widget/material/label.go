// SPDX-License-Identifier: Unlicense OR MIT

package material

import (
	"image/color"

	"gioui.org/internal/f32color"
	"gioui.org/layout"
	"gioui.org/op/paint"
	"gioui.org/text"
	"gioui.org/unit"
	"gioui.org/widget"
)

type LabelStyle struct {
	// Face defines the text style.
	Font text.Font
	// Color is the text color.
	Color color.NRGBA
	// SelectionColor is the color of the background for selected text.
	SelectionColor color.NRGBA
	// Alignment specify the text alignment.
	Alignment text.Alignment
	// MaxLines limits the number of lines. Zero means no limit.
	MaxLines int
	Text     string
	TextSize unit.Sp

	shaper *text.Shaper
	State  *widget.Selectable
}

func H1(th *Theme, txt string) LabelStyle {
	label := Label(th, th.TextSize*96.0/16.0, txt)
	label.Font.Weight = text.Light
	return label
}

func H2(th *Theme, txt string) LabelStyle {
	label := Label(th, th.TextSize*60.0/16.0, txt)
	label.Font.Weight = text.Light
	return label
}

func H3(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*48.0/16.0, txt)
}

func H4(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*34.0/16.0, txt)
}

func H5(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*24.0/16.0, txt)
}

func H6(th *Theme, txt string) LabelStyle {
	label := Label(th, th.TextSize*20.0/16.0, txt)
	label.Font.Weight = text.Medium
	return label
}

func Subtitle1(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*16.0/16.0, txt)
}

func Subtitle2(th *Theme, txt string) LabelStyle {
	label := Label(th, th.TextSize*14.0/16.0, txt)
	label.Font.Weight = text.Medium
	return label
}

func Body1(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize, txt)
}

func Body2(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*14.0/16.0, txt)
}

func Caption(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*12.0/16.0, txt)
}

func Overline(th *Theme, txt string) LabelStyle {
	return Label(th, th.TextSize*10.0/16.0, txt)
}

func Label(th *Theme, size unit.Sp, txt string) LabelStyle {
	return LabelStyle{
		Text:           txt,
		Color:          th.Palette.Fg,
		SelectionColor: f32color.MulAlpha(th.Palette.ContrastBg, 0x60),
		TextSize:       size,
		shaper:         th.Shaper,
	}
}

func (l LabelStyle) Layout(gtx layout.Context) layout.Dimensions {
	paint.ColorOp{Color: l.Color}.Add(gtx.Ops)
	tl := widget.Label{Alignment: l.Alignment, MaxLines: l.MaxLines, Selectable: l.State}
	if l.State == nil {
		return tl.Layout(gtx, l.shaper, l.Font, l.TextSize, l.Text)
	}
	return tl.LayoutSelectable(gtx, l.shaper, l.Font, l.TextSize, l.Text, func(gtx layout.Context) layout.Dimensions {
		paint.ColorOp{Color: l.SelectionColor}.Add(gtx.Ops)
		l.State.PaintSelection(gtx)
		paint.ColorOp{Color: l.Color}.Add(gtx.Ops)
		l.State.PaintText(gtx)
		return layout.Dimensions{}
	})
}
