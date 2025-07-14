MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoiceEVSPlay(4);
VoicePlay("G020410001_04_000");
MsgDisp("Nanatsumori","｛主人公｝.");
MsgDisp("主人公","Yes? ｛七ツ森＊｝.");
VoicePlay("G020410001_04_010");
MsgDisp("Nanatsumori","Do you have someone you like?");
MsgDisp("主人公","Huh?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020410001_04_020");
MsgDisp("Nanatsumori","C'mon, don't freak out. We're teenagers
right? Isn't this just normal stuff to
talk about?");
MsgDisp("主人公","Yeah, but...");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410001_04_030");
MsgDisp("Nanatsumori","Well, I guess it's hard to talk about.
Especially for girls.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
VoicePlay("G020410001_04_040");
MsgDisp("Nanatsumori","............");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("G020410001_04_050");
MsgDisp("Nanatsumori","But I do.
I have someone I like.");
MsgDisp("主人公","∈");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("G020410001_04_060");
MsgDisp("Nanatsumori","Duuude chill.
Why're you so surprised?
You're funny.");
MsgDisp("主人公","But...");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("G020410001_04_070");
MsgDisp("Nanatsumori","That's one of the things I like about you.
I can't stop feeling fond of you.
It's honestly a problem.");
MsgDisp("主人公","(My heart just skipped a beat...!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
