MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020120101_01_000");
MsgDisp("Kazama","I wonder how many more times we can 
see this view together.");
MsgDisp("主人公","It's a view I'd like to see as many 
times as possible.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020120101_01_010");
MsgDisp("Kazama","Oh, you said it, huh? I'm always 
up for it");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120101_01_020");
MsgDisp("Kazama","But you seem pretty busy, don't you?");
MsgDisp("主人公","Eh, I don't think that's true......");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020120101_01_030");
MsgDisp("Kazama","Then it's settled.
During firefly season,
we'll always come here together.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020120101_01_040");
MsgDisp("Kazama","There won't be any time for you 
to come here with anyone else.");
MsgDisp("主人公","Eh?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120101_01_050");
MsgDisp("Kazama","Haa...... I don't really want to say
things like this. Sorry. I made you feel
bad.");
MsgDisp("主人公","｛風真＊＊｝……");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120101_01_060");
MsgDisp("Kazama","You can do whatever you want with whoever
you want. You can even come here with
someone else you want to go with.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020120101_01_070");
MsgDisp("Kazama","But, I won't ever change. Not in the past,
not now, and not in the future.");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120101_01_080");
MsgDisp("Kazama","Even if your feelings change......");
MsgDisp("主人公","(｛風真＊＊｝,
somewhat seems like he's in pain......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
