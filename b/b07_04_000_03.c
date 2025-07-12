MsgDisp("主人公","Do you do any sports?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("B070400000_04_130");
MsgDisp("Nanatsumori","I do not.");
MsgDisp("主人公","Yeah, that's right.");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("B070400000_04_140");
MsgDisp("Nanatsumori","Then why did you ask.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B070400000_04_150");
MsgDisp("Nanatsumori","Just to preface.
It's not because I can't do it.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B070400000_04_160");
MsgDisp("Nanatsumori","...Probably.");
MsgDisp("主人公","Probably...?
Then you're a kid who can
do it if they try?");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B070400000_04_170");
MsgDisp("Nanatsumori","Kid huh.
Well, I'd like to think so.");
MsgDisp("主人公","Then, maybe you'd be amazing
if you really tried!");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B070400000_04_180");
MsgDisp("Nanatsumori","Not happening.
I don't want to stand out at school.");
MsgDisp("主人公","I see...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B070400000_04_190");
MsgDisp("Nanatsumori","You don't need to look so down.
If there's ever a chance... yeah, alright.
I'll show you my ultimate form.");
MsgDisp("主人公","(Sounds dodgy...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
