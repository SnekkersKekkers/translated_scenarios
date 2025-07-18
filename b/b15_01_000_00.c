BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,4,4,#1,#1,5,0);
ScrFadeIn(0);
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,4);
VoicePlay("B150100000_01_000");
MsgDisp("Kazama","...You're kinda used to that sort of thing
aren't you?");
MsgDisp("主人公","I'm not used to it but...
Did you dislike it?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,0);
VoicePlay("B150100000_01_010");
MsgDisp("Kazama","Not at all, it's fine.
I didn't live overseas 10 years for
nothing.");
MsgDisp("主人公","I see.
British people are really physically
affectionate aren't they?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B150100000_01_020");
MsgDisp("Kazama","Really physically affectionate you say...
I don't know what you're imagining but
it's just a normal greeting.");
MsgDisp("主人公","Normal...");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B150100000_01_030");
MsgDisp("Kazama","But, you're the other party so It's
troubling that I can't deal with you
normally.");
MsgDisp("主人公","Eh, why?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B150100000_01_040");
MsgDisp("Kazama","Listen, okay? Responding normally means
I'd have to return the physical affection,
right? Are you okay with that?");
MsgDisp("主人公","That...might be troubling.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B150100000_01_050");
MsgDisp("Kazama","Don't do something to someone if you know
it would trouble you.
...See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(British style skinship...
Is it really that intense?)");
MsgClose();
ScrFadeOut(0,0);
