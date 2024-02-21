DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://hello.c \
           "
        

S = "${WORKDIR}"

DEPENDS = "mystatic"

SRCREV = "${AUTOREV}"

do_compile() {
    ${CC} hello.c ${LDFLAGS} -o hello3 -lphy
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/hello ${D}${bindir}
    #install -d ${D}${docdir}
    #install -m 0644 ${S}/text.txt ${D}${docdir}
}
