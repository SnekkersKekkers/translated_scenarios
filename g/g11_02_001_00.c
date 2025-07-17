BGOpen("sc200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, what nice weather!
Come to think of it, I feel good lately.
Maybe it's because I've been exercising?)");
VoiceEVSPlay(2);
VoicePlay("G110200100_02_000");
MsgDisp("Sassa?","｛主人公｝.
You look like you're well.");
MsgClose();
SEPlay("EV_SE_625");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
MsgClose();
ChOpen(2,41,3,0,3,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Are you running?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G110200100_02_010");
MsgDisp("Sassa","Yeah, I was just going for a quick run
before lunch.
How about joining me?");
MsgDisp("主人公","Won't I get in ｛颯砂＊＊｝'s
way...?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("G110200100_02_020");
MsgDisp("Sassa","Not at all, let's go!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("ev002",0);
MsgClose();
ChOpen(2,100,1,1,0,#1,#1,0,0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoicePlay("G110200100_02_030");
MsgDisp("Sassa","Yeah, that's great. That you can be
relaxed. That's the result of your regular
exercise.");
MsgDisp("主人公","Eh?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200100_02_040");
MsgDisp("Sassa","You seemed to be having a lot of fun.");
MsgDisp("主人公","You've seen that?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200100_02_050");
MsgDisp("Sassa","Sometimes. But, the fact that you can do
it while looking like you're having fun is
a talent.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200100_02_060");
MsgDisp("Sassa","I thought I should follow your example.");
MsgDisp("主人公","Oh, I see.
But I think I've reached my limit...");
SEStop("EV_SE_FOOT_037",2);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("sc200",0);
MsgClose();
ChOpen(2,41,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgClose();
VoicePlay("G110200100_02_070");
MsgDisp("Sassa","Don't push yourself too hard.
It was fun running together.
See you.");
BGMStop();
SEPlay("EV_SE_626");
MsgClose();
ChClose(2);
MsgDisp("主人公","(Phew...
I'm a bit tired but It was fun running
with ｛颯砂＊＊｝.)");
MsgClose();
ScrFadeOut(0,0);
