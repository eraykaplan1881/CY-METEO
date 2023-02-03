all: cy-meteo.sh
	chmod +x cy-meteo.sh
	ln -s cy-meteo.sh exe

clean:
	rm exe
