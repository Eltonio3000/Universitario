from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes

key = get_random_bytes(16)
print(f"Chave cripstografada: {key.hex()}")

texto = b"mensagem secreta"
cifra = AES.new(chave, AES.MODE_EAX)
texto_cripto, tag = cifra.encrypt_and_digest(texto)

print("Texto cryptografado (hex):", texto_cripto.hex())