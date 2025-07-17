MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("G020520101_05_000");
MsgDisp("Hiiragi","｛主人公｝, please listen to me as
if I were talking to myself.");
MsgDisp("主人公","Eh?
O-Okay.");
VoicePlay("G020520101_05_010");
MsgDisp("Hiiragi","Thank you.");
ChEye(5,0);
VoicePlay("G020520101_05_020");
MsgDisp("Hiiragi","Since meeting you, I've been able to
deepen our relationship little by little.");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("G020520101_05_030");
MsgDisp("Hiiragi","And I thought it would continue like that
forever.");
ChEyeOpenLevel(5,0);
VoicePlay("G020520101_05_040");
MsgDisp("Hiiragi","... But, I was wrong.
We drifted apart in one go.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","｛柊＊＊＊｝...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020520101_05_050");
MsgDisp("Hiiragi","It's only natural, when you think about
it. Just like in the plays I create, love
doesn't always progress smoothly.");
ChEye(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,9);
VoicePlay("G020520101_05_060");
MsgDisp("Hiiragi","But unlike in a play, there might not be a
beautiful ending.");
ChEye(5,4);
ChMouth(5,0);
ChMotion(5,1);
ChEyeOpenLevel(5,#1);
VoicePlay("G020520101_05_070");
MsgDisp("Hiiragi","In fact, I might have to step off the
stage that features you as the heroine.");
MsgDisp("主人公","I'm...the heroine?");
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020520101_05_080");
MsgDisp("Hiiragi","Yes, that will never change.");
ChMotion(5,4);
VoicePlay("G020520101_05_090");
MsgDisp("Hiiragi","Continuing to share the same stage with
you and staying by your side is not a
simple task.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G020520101_05_100");
MsgDisp("Hiiragi","But I've experienced that place before.
And that is why, I will return to it.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520101_05_110");
MsgDisp("Hiiragi","It's alright.
This script is yet to be finished.
Wouldn't you say so?");
MsgDisp("主人公","(A stage where I'm the heroine...?
I don't know how I should respond to
that...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
