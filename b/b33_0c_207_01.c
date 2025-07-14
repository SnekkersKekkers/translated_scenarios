ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
BGOpen("tr400",0);
ScrFadeIn(0);
Wait(40,1);
ScrFadeOut(1,0,40);
BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(2);
ChOpen(6,255,7,0,4,#1,#1,0,3);
ChOpen(5,255,0,0,4,#1,#1,0,3);
ChOpen(7,255,0,0,4,#1,#1,0,3);
ScrFadeIn(0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("B330C20701_06_000");
MsgDisp("Himuro","As I thought, the rollercoaster sure is
popular.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C20701_05_000");
MsgDisp("Hiiragi","Yes, we finally made it this far.
This is the spice of waiting.");
SEPlay("EV_SE_817");
Wait(30,0);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B330C20701_06_010");
MsgDisp("Himuro","...These screams included.");
MsgDisp("主人公","Haa... I get nervous every time I come
here.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20701_07_000");
MsgDisp("Mikage","Right, it's like the dentist
waiting room.");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
MsgDisp("主人公","Eh?");
SEPlay("EV_SE_817");
Wait(20,0);
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,4);
VoicePlay("B330C20701_07_010");
MsgDisp("Mikage","The sound of the drill.");
ChEye(7,2);
ChMouth(7,2);
ChMotion(7,1);
ChEyeOpenLevel(7,0);
VoicePlay("B330C20701_07_020");
MsgDisp("Mikage","The screams of the patients.");
MsgDisp("主人公","It's similar huh...");
ChMouth(5,4);
ChMotion(5,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330C20701_06_020");
MsgDisp("Himuro","What are you whispering about over there?
Look, we're almost there.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C20701_07_030");
MsgDisp("Mikage","Yeah, yeah.
...Hm? What's that?");
ChEye(5,4);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B330C20701_05_010");
MsgDisp("Hiiragi","Umm, \"guests smaller than this can't go on
the ride\" ...Is what it says.");
ChMouth(5,4);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20701_07_040");
MsgDisp("Mikage","If it was \"Guests bigger than this can't
ride\" we might've had a chance huh?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("B330C20701_06_030");
MsgDisp("Himuro","What are you saying.
Right it's our turn.");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("B330C20701_05_020");
MsgDisp("Hiiragi","Yes, let's go!");
MsgClose();
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(5,0,30);
ChClose(7,0,30);
ChLayout(1);
MsgClose();
ChOpen(7,255,7,2,0,#1,#1,0,0,0,30);
MsgDisp("主人公","That's too bad, ｛御影＊＊｝.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20701_07_050");
MsgDisp("Mikage","Yeah, good luck to 
the both of us, yeah?");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(I'm also not really good with
rollercoasters...
but ｛御影＊＊｝ might be worse?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(5,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
