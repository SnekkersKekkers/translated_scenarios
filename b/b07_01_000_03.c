MsgDisp("主人公","Is there any sports you do?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_110");
MsgDisp("Kazama","Not really.
I don't do any.
Is there a problem?");
MsgDisp("主人公","There's no problem.
Since ｛風真＊＊｝ is also good at
physical activity.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070100000_01_120");
MsgDisp("Kazama","Being able to do something is different to
liking it.");
MsgDisp("主人公","Is that how it is.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_130");
MsgDisp("Kazama","Yes it is.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B070100000_01_140");
MsgDisp("Kazama","Ah, there is one thing.
I like sumo, it's interesting.");
MsgDisp("主人公","Eh, ...｛風真＊＊｝ does sumo?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_150");
MsgDisp("Kazama","...I'm the spectator.
I'm watching it.");
MsgDisp("主人公","Ah! Is that right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070100000_01_160");
MsgDisp("Kazama","You... Don't imagine weird things on your
own!");
MsgDisp("主人公","(Ugh...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
