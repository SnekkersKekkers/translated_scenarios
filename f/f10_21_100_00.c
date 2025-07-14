BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, it's ｛みちる＊｝ )");
MsgClose();
BGMPlay("BGM_C21_MICHIRU_A",0.01);
Wait(15,0);
ChOpen(21,254,2,2,2,#1,#1,0,0);
VoicePlay("F102110000_21_000");
MsgDisp("Michiru","Haa...");
MsgDisp("主人公","｛みちる＊｝! You're sighing, is
something the matter?");
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F102110000_21_010");
MsgDisp("Michiru","Ah, Mari...
Yeah......");
MsgDisp("主人公","Is there something worrying you?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102110000_21_020");
MsgDisp("Michiru","Something worrying me...
Maybe that's it.");
MsgDisp("主人公","?");
ChEye(21,2);
ChMouth(21,2);
ChMotion(21,2);
VoicePlay("F102110000_21_030");
MsgDisp("Michiru","But there's nothing I can do.
Ahh...");
MsgDisp("主人公","Um, if it's of any help, you can consult
me about it?");
ChEye(21,2);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("F102110000_21_040");
MsgDisp("Michiru","No, it's fine.
Thank you for worrying about me, Mari.
See you....");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(21);
VoicePlay("F102110000_21_050");
MsgDisp("Michiru","Ha...
What should I do...");
MsgDisp("主人公","(She seems super troubled.
Will she be alright...)");
MsgClose();
ScrFadeOut(0,0);
