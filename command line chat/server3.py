import socket

host = '127.0.0.1'
port = 5000
clients = []

s = socket.socket(socket.AF_INET , socket.SOCK_DGRAM)
s.bind((host,port))
s.setblocking(0)

print "Server Started"

quitting = False

while not quitting:
	try :
		data , addr = s.recvfrom(1024)
		if "Quit" in str(data):
			quitting = True

		if addr not in clients:
			clients.append(addr)

		print str(addr) +"::"+str(data)

		for i in clients:
			s.sendto(data , i)
	except:
		pass


s.close()


