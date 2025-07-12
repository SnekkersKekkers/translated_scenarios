ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
BGOpen("tr200",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Haa, this place is so relaxing...");
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
VoiceEVSPlay(1);
VoicePlay("B330A20700_01_000");
MsgDisp("Kazama","｛主人公｝, you're the 
type animals are drawn to.");
MsgDisp("主人公","Is that so?
They're cute, so I'm happy.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330A20700_06_000");
MsgDisp("Himuro","But,
there's always someone better.
Look.");
ChMouth(1,2);
VoicePlay("B330A20700_02_000");
MsgDisp("Sassa","Uwaa, what's up?
Why are you clinging 
onto me like that?");
MsgDisp("主人公","｛颯砂＊＊｝?");
VoicePlay("B330A20700_02_010");
MsgDisp("Sassa","It's dangerous, I'll 
accidentally step on you.
Get off me...");
VoicePlay("B330A20700_48_000");
MsgDisp("Staff","Alright, it's feeding time.");
MsgClose();
SEPlay("EV_SE_546",0.6,0.5);
SEPlay("EV_SE_548",0.3,0.6);
Wait(70,0);
ScrFadeOut(0);
SEStop("EV_SE_546",3);
SEStop("EV_SE_548",3);
ChClose(1,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(2,255,4,2,4,0,#1,0,3,0,0);
ChOpen(1,255,0,0,2,#1,#1,0,3,0,0);
ChOpen(6,255,0,0,0,#1,#1,0,3,0,0);
ChLayout(2);
SEWait();
ScrFadeIn(0);
VoicePlay("B330A20700_02_020");
MsgDisp("Sassa","Haa... that saved me.");
MsgDisp("主人公","Hehe.
｛颯砂＊＊｝ sure is liked by 
animals isn't he?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330A20700_06_010");
MsgDisp("Himuro","Maybe it's cause he
smells like catnip?");
MsgDisp("主人公","Ehh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B330A20700_02_030");
MsgDisp("Sassa","T-That's not it.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20700_01_010");
MsgDisp("Kazama","Then, maybe it's cause
he smells of protein powder?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A20700_02_040");
MsgDisp("Sassa","What are you two saying!");
MsgDisp("主人公","I think it's surely just because
the animals know ｛颯砂＊＊｝ 
is a good person.");
ChEye(1,0);
ChMouth(1,2);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B330A20700_02_050");
MsgDisp("Sassa","Oh, that must be it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A20700_06_020");
MsgDisp("Himuro","...Surely it's his hairwax.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B330A20700_01_020");
MsgDisp("Kazama","Yeah, that's it.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B330A20700_02_060");
MsgDisp("Sassa","I'm not wearing anything!");
MsgDisp("主人公","(Hehe.
I wonder if ｛風真＊＊｝ and
｛氷室＊＊｝ are jealous?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,7);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,7);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,7);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
