BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh? 
Over there...");
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
VoicePlay("F110410001_46_000");
MsgDisp("Woman Customer A","Eh, isn't that the student council
president?");
VoicePlay("F110410001_47_000");
MsgDisp("Woman Customer B","I feel like something new!
Hey hey, can you take off your glasses?");
VoicePlay("F110410001_04_000");
MsgDisp("Nanatsumori","No.
I can't do that.");
VoicePlay("F110410001_47_010");
MsgDisp("Woman Customer B","Come on!
I think you'd be totally handsome～!");
MsgDisp("主人公","｛七ツ森＊｝!");
ChMotion(4,1,1);
VoicePlay("F110410001_04_010");
MsgDisp("Nanatsumori","Ah, someone's calling me.
Please excuse me.");
VoicePlay("F110410001_46_010");
MsgDisp("Woman Customer A","Aw....");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc710",0);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("F110410001_04_020");
MsgDisp("Nanatsumori","Ha...");
MsgDisp("主人公","Are you alright?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("F110410001_04_030");
MsgDisp("Nanatsumori","That amount of girls is scary.
No matter what I say, they stick around...
There's no way.");
ChMotion(4,2,1);
VoicePlay("F110410001_04_040");
MsgDisp("Nanatsumori","I wonder what would've happened
if you hadn't happened to pass by...");
MsgDisp("主人公","Hehe. Glad I could help.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F110410001_04_050");
MsgDisp("Nanatsumori","Here.
Take a takoyaki.
My thanks for rescuing me.");
MsgDisp("主人公","(Yay! Even though ｛七ツ森＊｝ is in a
school uniform, he still stands out,
huh...)");
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
