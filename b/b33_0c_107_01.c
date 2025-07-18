ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr450",0);
ScrFadeIn(1,40);
Wait(60,1);
ScrFadeOut(1,0,40);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(5,255,3,3,4,#1,#1,0,3);
ChOpen(6,255,2,2,0,0,#1,0,3);
ChOpen(7,255,2,2,2,0,#1,0,3);
ScrFadeIn(0);
ChMouth(5,3);
VoicePlay("B330C10701_05_000");
MsgDisp("Hiiragi","Haa...that was fun!");
MsgDisp("主人公","Yeah!");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,0);
VoicePlay("B330C10701_07_000");
MsgDisp("Mikage","There was such a thing a s a four-seater
cup?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10701_05_010");
MsgDisp("Hiiragi","It seems as there weren't many of them,
but we were lucky.");
MsgDisp("主人公","Thanks to that, we all rode together.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoiceEVSPlay(6);
VoicePlay("B330C10701_06_000");
MsgDisp("Himuro","｛主人公｝, both you and
Yanosuke-senpai spun it too fast....");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("B330C10701_05_020");
MsgDisp("Hiiragi","Ah, I'm sorry.
I got excited beyond my better judgement.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("B330C10701_07_010");
MsgDisp("Mikage","I thought the four seater one would have a
slow rotational speed.
I underestimated it...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,3);
VoicePlay("B330C10701_06_010");
MsgDisp("Himuro","Yes.
It was an issue more with the steerer,
than the size.");
MsgDisp("主人公","Umm...are you two okay?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B330C10701_05_030");
MsgDisp("Hiiragi","I'm sorry.
I wanted to know how far I could go; what
my limits are...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B330C10701_07_020");
MsgDisp("Mikage","I see. I'm satisfied now that I know what
my limits are. I'm sitting on a bench.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C10701_06_020");
MsgDisp("Himuro","I'l stop testing my limits here too.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(7,0,30);
MsgDisp("主人公","Ah...");
SEWait();
ChClose(5,0,30);
ChLayout(1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(5,255,0,4,4,#1,#1,0,0,0,30);
VoicePlay("B330C10701_05_040");
MsgDisp("Hiiragi","...Phew.
Shall we ride on a two person one next?");
MsgDisp("主人公","Ehh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10701_05_050");
MsgDisp("Hiiragi","Just now, those two were there, so I held
back. But if I'm with you, I can really go
for it, right?");
MsgDisp("主人公","Hehe!
Bring it on! @");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("B330C10701_05_060");
MsgDisp("Hiiragi","I suspected as much, let's go for the end!");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
MsgDisp("主人公","(I feel sorry for ｛氷室＊＊｝ and
｛御影＊＊｝ but...I'm
glad to be having fun with
｛柊＊＊＊｝!)");
BGMStop();
MsgClose();
ChLayout(2);
ChOpen(5,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
