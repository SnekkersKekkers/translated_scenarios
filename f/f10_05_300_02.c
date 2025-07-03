BGOpen("sc100",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,4,0,4,-1,-1,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, it's ｛柊＊＊＊｝.
Looks like it's his turn to do 
the greeting enforcement campaign 
today as well)");
VoicePlay("F100530002_05_000");
MsgDisp("Hiiragi","Good morning.");
VoicePlay("F100530002_40_000");
MsgDisp("Male Student A","Yo.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530002_05_010");
MsgDisp("Hiiragi","Ah, that is also 
a fun greeting.");
VoicePlay("F100530002_39_010");
MsgDisp("Male Student B","Yoー!");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530002_05_020");
MsgDisp("Hiiragi","Yoー.");
MsgDisp("主人公","Hehe
Looks like you've learned another
greeting, right, ｛柊＊＊＊｝?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530002_05_030");
MsgDisp("Hiiragi","Yes. Fun greetings are great because
they make everyone smile naturally.");
VoicePlay("F100530002_40_020");
MsgDisp("Male Student A","I see, use it as much 
as you like, Yanosuke.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100530002_05_040");
MsgDisp("Hiiragi","Ouiー.");
ChPosition(5,1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
SEWait();
ChOpen(22,254,0,0,0,-1,-1,0,2);
ChMotion(22,4,1);
VoicePlay("F100530002_22_000");
MsgDisp("Hikaru","Oui?");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,4);
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,2,1);
VoicePlay("F100530002_22_010");
MsgDisp("Hikaru","Yanosuke-san, no no, try again.
Okay～?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100530002_22_020");
MsgDisp("Hikaru","Bonjour!");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,4,1);
VoicePlay("F100530002_05_050");
MsgDisp("Hiiragi","Bonjour!");
MsgDisp("主人公","Bonjour!");
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
ChLayout(2);
MsgClose();
ChOpen(5,254,4,0,4,-1,-1,0,1,0,30);
ChOpen(22,254,0,0,3,-1,-1,0,0,0,30);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(21,254,0,4,4,-1,-1,0,2);
VoicePlay("F100530002_21_000");
MsgDisp("Michiru","...Bonjour.");
ChEye(5,4);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100530002_22_030");
MsgDisp("Hikaru","Ahaha, big sis can say it too♪");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,1);
ChCheek(21,8);
VoicePlay("F100530002_21_010");
MsgDisp("Michiru","Of course I can.
Well, I just felt like it today.");
ChEyeOpenLevel(22,0);
ChCheek(21,0);
MsgDisp("主人公","Hehe!");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100530002_05_060");
MsgDisp("Hiiragi","Heheh. I really do enjoy the greeting
enforcement campaign.");
MsgDisp("主人公","(I might understand how ｛柊＊＊＊｝ feels?
Funny greeetings just make you
smile naturally, it's nice!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
