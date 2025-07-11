BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(2,254,3,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("F110210001_02_000");
MsgDisp("Sassa","｛主人公｝,
Are you enjoying the festival?");
MsgDisp("主人公","Yes, ｛颯砂＊＊｝ —");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,0);
VoicePlay("F110210001_42_000");
MsgDisp("Male Customer A","Sassa-kun!
I brought my team this year.");
ChEye(2,5);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("F110210001_02_010");
MsgDisp("Sassa","Uh, what?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("F110210001_33_010");
MsgDisp("Male Customer B","Sassa-kun!
Nice to meet you!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("F110210001_02_020");
MsgDisp("Sassa","Oh, you're the one from track
I spoke to last year, right...?");
VoicePlay("F110210001_42_020");
MsgDisp("Male Customer A","Yep.
I told you I'd bring my friends last year.
My track and field club.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("F110210001_02_030");
MsgDisp("Sassa","Oh, you did say that.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
ChEyeOpenLevel(2,8);
VoicePlay("F110210001_02_040");
MsgDisp("Sassa","Well, I did make that promise...");
MsgDisp("主人公","Hehe. Seems like the culture festival 
is becoming more like ｛颯砂＊＊｝'s 
track and field class.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F110210001_02_050");
MsgDisp("Sassa","It's all good.
Well, I'll see you later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝'s like a famous athlete.
Maybe he's becoming our culture 
festival's specialty?)");
MsgClose();
ScrFadeOut(0);
