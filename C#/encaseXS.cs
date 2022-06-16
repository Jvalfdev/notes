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
