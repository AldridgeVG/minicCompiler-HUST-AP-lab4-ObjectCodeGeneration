.data
.globl main
.text
label1:
func:
  li $t3, 1
  sw $t3, 20($sp)
  lw $t1, 12($sp)
  lw $t2, 20($sp)
  blt $t1,$t2,label3
  j label2
label3:
  lw $t1, 12($sp)
  lw $t2, 16($sp)
  add $t3,$t1,$t2
  sw $t3, 20($sp)
  lw $v0, 20($sp)
  jr $ra
label2:
  li $t3, 1
  sw $t3, 24($sp)
  lw $t1, 12($sp)
  lw $t2, 24($sp)
  sub $t3,$t1,$t2
  sw $t3, 28($sp)
  li $t3, 1
  sw $t3, 32($sp)
  lw $t1, 16($sp)
  lw $t2, 32($sp)
  add $t3,$t1,$t2
  sw $t3, 36($sp)
  move $t0,$sp
  addi $sp, $sp, -60
  sw $ra,0($sp)
  lw $t1, 28($t0)
  move $t3,$t1
  sw $t3,12($sp)
  lw $t1, 36($t0)
  move $t3,$t1
  sw $t3,16($sp)
  jal func
  lw $ra,0($sp)
  addi $sp,$sp,60
  sw $v0,40($sp)
  lw $v0, 40($sp)
  jr $ra
label4:
main:
  addi $sp, $sp, -0
  move $t6, $sp
  addi $sp, $sp, -36
  li $t3, 10
  sw $t3, 0($sp)
  lw $t1, 0($sp)
  move $t3, $t1
  sw $t3, 12($sp)
label5:
  li $t3, 20
  sw $t3, 0($sp)
  lw $t1, 0($sp)
  move $t3, $t1
  sw $t3, 16($sp)
label6:
  move $t0,$sp
  addi $sp, $sp, -60
  sw $ra,0($sp)
  lw $t1, 12($t0)
  move $t3,$t1
  sw $t3,12($sp)
  lw $t1, 16($t0)
  move $t3,$t1
  sw $t3,16($sp)
  jal func
  lw $ra,0($sp)
  addi $sp,$sp,60
  sw $v0,0($sp)
  lw $t1, 0($sp)
  move $t3, $t1
  sw $t3, 8($sp)
label7:
  lw $v0, 8($sp)
  jr $ra