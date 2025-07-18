BGOpen("sc500",0);
ChLayout(1);
ScrFadeIn(0);
BGMPlay("BGM_C02_SASSA_A",0.01);
MsgClose();
ChOpen(2,254,3,0,3,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("D100210000_02_000");
MsgDisp("Sassa","｛主人公｝, listen to me.");
MsgDisp("主人公","Good morning, ｛颯砂＊＊｝.
What's up?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D100210000_02_010");
MsgDisp("Sassa","I had a weird dream.
You were in it.");
MsgDisp("主人公","What kind of dream?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D100210000_02_020");
MsgDisp("Sassa","You and I were standing on a white podium
together.");
MsgDisp("主人公","Did you dream that we won a tournament?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("D100210000_02_030");
MsgDisp("Sassa","Yeah, but we were together as a pair. I
wonder what kind of competition it was,
I'll think about it. Cya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(2);
MsgDisp("主人公","(A white podium, huh...Huh? I feel like
I've seen something like that before...)");
MsgClose();
ScrFadeOut(0);
