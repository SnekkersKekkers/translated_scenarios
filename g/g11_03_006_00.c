BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The introduction text that ｛本多＊＊｝
came up with was well-received......)");
MsgDisp("主人公","'A book for adults to meet their high
school selves, and for high school
students to meet themselves tomorrow'
huh......");
VoicePlay("G110300600_42_000");
MsgDisp("Manager","Honda-kun's ＰＯＰ is great, huh?
One day I'll ask you to do one too.");
MsgDisp("主人公","Ah, yes! I don't think I can do it like
｛本多＊＊｝, but it looks fun......");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Good work. ｛本多＊＊｝'s introductory
text was well-received, and even praised
by the manager.'");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300600_03_000");
MsgDisp("Honda","Really? I was a bit worried because it's a
girl's comic, but I'm glad.");
MsgDisp("主人公","I think it made me want to read it too; 'A
book for adults to meet their high school
selves, and for high school students to
meet themselves tomorrow'");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300600_03_010");
MsgDisp("Honda","Yeah yeah, give it a try.
I wonder if you can meet tomorrow's you.");
MsgDisp("主人公","Did you manage to meet tomorrow's
｛本多＊＊｝?");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300600_03_020");
MsgDisp("Honda","Ah, me?
Somehow I met you.
It's odd, huh?");
MsgDisp("主人公","Eh-?");
MsgDisp("主人公","(What does he mean by that......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
