//El align "left" funciona perfectamente en la balanza pero cuando alinea en "right" o "center" falla
//esto es porque alinea utilizando el valor de referencia de posición X

if (m_lstLabels[idx].align == "right") 
{
PosX = (int)(PosX + m_lstLabels[idx].widget.Width);//Para solventarlo se le suma al valor el ancho del objeto para alinearlo a la derecha
}
if (m_lstLabels[idx].align == "center")
{
PosX = (int)(PosX + m_lstLabels[idx].widget.Width/2);//O sumarle la mitad del ancho del objeto para alinearlo en el centro
}

//Pinta una línea válida para el XML con el objeto "código de barras"
//barcode_type_H = barcode Indica que es de tipo barcode para la balanza XS
//m_lstLabels[idx].barcode_type = Tipo de código de barras (ean8, code128, etc)
l_fsXML.WriteLine("\t\t\t<item type=\"barcode\" id=\"-1\" resource=\"" + barcode_type_H + "\" barcode_type=\"" + m_lstLabels[idx].barcode_type + "\" alignment=\"\" orientation =\"\"  x=\"" + Convert.ToString(PosX) + "\" y=\"" + Convert.ToString(PosY) + "\" width=\"" + Convert.ToString(Decimal.Truncate((decimal)m_lstLabels[idx].widget.Width)) + "\" height=\"" + Convert.ToString(Decimal.Truncate((decimal)m_lstLabels[idx].widget.Height)) + "\"></item>");



//Pinta una línea en el xml con los datos del objeto tipo "campo"
//m_lstLabels[idx].textbox_type = Tipo de campo (line.Description, header.Text)

l_fsXML.WriteLine("\t\t\t<item type=\"field\" resource=\"" + m_lstLabels[idx].textbox_type +"\" x=\"" + Convert.ToString(PosX) + "\" y=\"" + Convert.ToString(PosY) + "\" alignment=\"" + m_lstLabels[idx].align + "\" width=\"" + Convert.ToString(Decimal.Truncate((decimal)m_lstLabels[idx].widget.Width)) + "\" height=\"" + Convert.ToString(Decimal.Truncate((decimal)m_lstLabels[idx].widget.Height)) + "\" font=\"" + m_lstLabels[idx].font + " " + bold + " " + m_lstLabels[idx].font_size + "\" id=\"" + m_lstLabels[idx].id + "\"></item>");
