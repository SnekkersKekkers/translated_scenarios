BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Today's weather is so good, 
it might be nice to eat lunch
on the rooftop.");
VoicePlay("F100610000_06_000");
MsgDisp("Himuro?","I don't know.
Why don't you ask him yourself?");
VoicePlay("F100610000_41_000");
MsgDisp("Male Student","Don't say that, Himuroo～");
MsgDisp("主人公","……?");
MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,254,0,0,0,-1,-1,0,0);
VoicePlay("F100610000_06_010");
MsgDisp("Himuro","...Hello.");
MsgDisp("主人公","Did something happen?
Your friend was clinging onto you...");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100610000_06_020");
MsgDisp("Himuro","Haa.. don't mind it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610000_06_030");
MsgDisp("Himuro","He just had lots of questions
to ask about Reiichi san.");
MsgDisp("主人公","About Reiichi san?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610000_06_040");
MsgDisp("Himuro","Right.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("F100610000_06_050");
MsgDisp("Himuro","Generally, he'd be very mistaken
to think that relatives know everything.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("F100610000_06_060");
MsgDisp("Himuro","Furthermore... there's no way he'd
talk to me about what type of
person he likes.");
MsgDisp("主人公","D-Did he ask that kind of thing?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610000_06_070");
MsgDisp("Himuro","It's really just nonsense.
You should forget it too.");
MsgDisp("主人公","(Hmm...
but if you asked if I was curious, 
I would say I am.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
