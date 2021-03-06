{
	"service" : {
		"api" : "http",
		"port" : 8080
	},

    "cache" : {
        "backend" : "thread_shared"
    },
	"http" : {
		"script_names" : ["/tatodetect"]
	},
	"localization" : {
		"encoding" : "utf-8",
		"messages" : {
			"paths" : [ "../locale" ],
			"domains" : [ "hello" ]
		},
		"locales" : [ "en_GB.UTF-8", "fr_FR.UTF-8" ]
	},
    "session" : {
        "expire" : "renew",
        "timeout" : 604800,
        "location" : "server",
        "server" : {
            "storage" : "memory"
        }
    },
	"tatodetect" : {
        "web" : "http://127.0.0.1:4242/",
        "interfacelangs" : [
            ["en"  , "en_GB.UTF-8", "English"],
            ["fr"  , "fr_FR.UTF-8", "Français"]
        ],
        "sqlite3" : {
            "path" : "../data/ngrams.db"
        }
	}
}
