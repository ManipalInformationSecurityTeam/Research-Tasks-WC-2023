def beaufort_cipher(text, key):
    
    text = text.upper()
    key = key.upper()

    result = ""

    key_length = len(key)

    for i in range(len(text)):
        
        text_char = text[i]

        if text_char.isalpha():
    
            key_char = key[i % key_length]

            # Calculating the position in the alphabet (0 for 'A', etc. by subtracting the ASCII values)
            text_pos = ord(text_char) - ord('A')
            key_pos = ord(key_char) - ord('A')

            # Beaufort cipher formula
            cipher_pos = (key_pos - text_pos) % 26

            # Converting position back to a character
            cipher_char = chr(cipher_pos + ord('A'))

            result += cipher_char
        else:
            result += text_char


    return result

plain_text = input("Enter the plain text: ")
key = input("Enter the key: ")
  

encrypted_text = beaufort_cipher(plain_text, key)
print(f"Encrypted Text: {encrypted_text}")


decrypted_text = beaufort_cipher(encrypted_text, key)
print(f"Decrypted Text: {decrypted_text}")