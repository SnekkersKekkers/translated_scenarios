BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0);
VoicePlay("E010430200_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Are you working?");
ChMotion(4,1,1);
VoicePlay("E010430200_04_010");
MsgDisp("Nanatsumori","Yeah.
I'm just about done for today.");
MsgDisp("主人公","Good work today!");
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010430200_04_020");
MsgDisp("Nanatsumori","You went shopping?
Lemme see your haul-");
ChMouth(4,4);
ChMouthOpenLevel(4,8);
VoiceEVSPlay(7);
VoicePlay("E010430200_07_000");
MsgDisp("Mikage?","｛主人公｝.");
ChEye(4,5);
ChMouth(4,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(4,1);
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,2,0,60);
MsgDisp("主人公","｛御影＊＊｝!");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
ChEyeOpenLevel(4,7);
VoicePlay("E010430200_04_030");
MsgDisp("Nanatsumori","Uh oh...");
ChEyeOpenLevel(4,#1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010430200_07_010");
MsgDisp("Mikage","Oh, is someone hitting on you?");
MsgDisp("主人公","Huh?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
ChEyeOpenLevel(4,7);
VoicePlay("E010430200_04_040");
MsgDisp("Nanatsumori","He thinks you're being hit on by some
flashy guy called Nana.
AKA me."); 
MsgDisp("主人公","Ah...");
ChEyeOpenLevel(4,#1);
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,3);
VoicePlay("E010430200_07_020");
MsgDisp("Mikage","Hm?");
ChEye(4,5);
ChMouth(4,2);
ChMotion(4,5,1);
ChMotion(7,3,1);
MsgDisp("主人公","Ah it's not like that!
I'm not being hit on.
This guy is-");
ChEye(4,2);
ChMouth(4,1);
VoicePlay("E010430200_04_050");
MsgDisp("Nanatsumori","Wait.
What are you planning to say?");
MsgDisp("主人公","Ah...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010430200_07_030");
MsgDisp("Mikage","Okay okay, I don't mean to bother you.
It is getting pretty late though-.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7,0,30);
Wait(30);
ChPosition(4,0);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
ChEyeOpenLevel(4,0);
VoicePlay("E010430200_04_060");
MsgDisp("Nanatsumori","Phew...");
ChEyeOpenLevel(4,#1);
MsgDisp("主人公","I'm sorry.
I almost exposed your identity,
｛七ツ森＊｝...");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("E010430200_04_070");
MsgDisp("Nanatsumori","We were able to prevent it, though I feel
it almost led to another misunderstanding.");
MsgDisp("主人公","(What other misunderstanding could there
be?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
