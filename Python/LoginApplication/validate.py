import string 

def passwordcheck(passcode):
    counter=True
    message = """********************************************
*               Password is weak           *
********************************************\n"""
    if 6<=len(passcode) and len(passcode)<=10:
        counter  = True 
    else:
         message+= """Length must be in between 6 to 10 \n"""
    if list(filter(str.isupper,passcode))==[]:
        message+= "Atleast one character should be in uppercase\n"
    if list(filter(str.isdigit,passcode))==[]:
        message+= "Atleast one character should be \n"
    if list(filter(lambda x: x in string.punctuation,passcode))==[]:
        message+= "Atleast one character should be a special character \n"
    return  message if message!="" else counter
     


def userNameCheck(username):
    with open(r"D:\\Github\\lab-work\\Python\\LoginApplication\\Records\\database.txt","r") as db:
           records = db.read().split("\n")
           for i in records:
                if i[0:14].rstrip()==username:
                    return True
    return False


def preprocessuser(username,passcode):
    username = username if len(username)==15 else username+(" ")*(15-len(username))
    passcode = passcode if len(passcode)==10 else passcode+(" ")*(10-len(passcode))
    return username+"#"*5+passcode

#pass [-10::].rstrip()
