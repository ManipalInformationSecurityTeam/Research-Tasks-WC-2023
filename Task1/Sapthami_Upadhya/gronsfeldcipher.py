#Encryption

def gronsfeld_encrypt(plaintext, key):
    alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    ciphertext = ''
    p_length=len(plaintext)
    k_length=len(key)
    key_repeat = (key * ((p_length//k_length) + 1))
    key_final=key_repeat[:len(plaintext)]  #set length of key same as text
    
    for i in range(p_length):
        p=plaintext[i].upper()
        k=key_final[i]
        if p in alphabet:
            shifted_index = (alphabet.index(p) + int(k)) % 26
            ciphertext += alphabet[shifted_index]
        else:
            ciphertext += p  
            
    return ciphertext

def gronsfeld_decrypt(ciphertext, key):
    alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    plaintext = ''
    c_length=len(ciphertext)
    k_length=len(key)
    key_repeat=(key*((c_length//k_length)+1))
    key_final = key_repeat[:len(ciphertext)]  #set length of key same as text
    
    for i in range(c_length):
        c=ciphertext[i].upper()
        k=key_final[i]
        if c in alphabet:
            shifted_index = (alphabet.index(c) - int(k)) % 26
            plaintext += alphabet[shifted_index]
        else:
            plaintext += c  
            
    return plaintext


plaintext= input("Enter the plain text: ")
key=input("Enter the key: ")
print(gronsfeld_encrypt(plaintext,key))
ciphertext= input("Enter the cipher text: ")
key=input("Enter the key: ")
print(gronsfeld_decrypt(ciphertext,key))



