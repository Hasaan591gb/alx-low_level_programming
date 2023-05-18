#!/usr/bin/python3

import dis

with open('crackme4', 'rb') as f:
    code = dis.get_instructions(f.read())
    dis.disassemble(code)

