new-item -path "C:\Users\plane\OneDrive\Documentos\exemplo\exemplo2vs" -itemtype directory
new-item -path "C:\Users\plane\OneDrive\Documentos\exemplo\backup3" -itemtype directory
$DateStr = (Get-Date).ToString("yyyy-MM-dd")
$FileName = "arquivoexemplo_$DateStr.txt"
new-item -path "C:\Users\plane\OneDrive\Documentos\exemplo\exemplo2vs\arquivoexemplo_$DateStr.txt" -itemtype file
copy-item -path "C:\Users\plane\OneDrive\Documentos\exemplo\exemplo2vs\arquivoexemplo_$DateStr.txt" -destination "C:\Users\plane\OneDrive\Documentos\exemplo\backup3"
get-childitem -path "C:\Users\plane\OneDrive\Documentos\exemplo\backup3"
