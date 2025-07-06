BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(2);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B330C30101_07_000");
MsgDisp("Mikage","It feels like you can get
whatever you wanted here.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C30101_06_000");
MsgDisp("Himuro","Will you buy something for us?");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,5);
VoicePlay("B330C30101_07_010");
MsgDisp("Mikage","Eh? That...");
MsgDisp("主人公","｛氷室＊＊｝, 
is there something you want?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C30101_05_000");
MsgDisp("Hiiragi","What is it?");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("B330C30101_07_020");
MsgDisp("Mikage","Yeah, let's hear it.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330C30101_06_010");
MsgDisp("Himuro","Surfboard.
But it's expensive.");
ChEye(5,0);
ChMouth(5,2);
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("B330C30101_07_030");
MsgDisp("Mikage","Ugh...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C30101_05_010");
MsgDisp("Hiiragi","Inori-kun is a surfer after all.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C30101_06_020");
MsgDisp("Himuro","You can't buy it with just 
a bit of part-time work. But it's a 
vintage item, so it's quite valuable.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C30101_05_020");
MsgDisp("Hiiragi","I would like to see that.
Inori-kun, do they sell it here?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330C30101_06_030");
MsgDisp("Himuro","Yeah, let's go with everyone.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(5,0,30);
ChClose(7,0,30);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,4,-1,-1,0,0,0,30);
MsgDisp("主人公","Are you coming too, ｛御影＊＊｝?");
ChEye(7,2);
ChMouth(7,4);
ChMotion(7,4);
VoicePlay("B330C30101_07_040");
MsgDisp("Mikage","O-Oi.
I can't afford to buy 
something that expensive...");
MsgDisp("主人公","Hehe, it's alright. I think both
｛氷室＊＊｝ and ｛御影＊＊｝ have no
intention of buying it at all.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("B330C30101_07_050");
MsgDisp("Mikage","Ah, really?
None at all, huh...");
MsgDisp("主人公","(｛御影＊＊｝ will end up wanting
to grant any of his student's wishes...");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(2);
ChOpen(5,253,7,0,0,-1,-1,0,3,0,0);
ChOpen(6,253,7,0,0,-1,-1,0,3,0,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,7);
ChEyeOpenLevel(7,-1);
ChMouthOpenLevel(7,-1);
ChCheek(7,0);
