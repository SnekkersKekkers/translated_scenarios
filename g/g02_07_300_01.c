ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("G020730001_07_000");
MsgDisp("Mikage","I wonder how it looks to you?
This view.");
MsgDisp("主人公","Eh?
I'm looking at the same view as
｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("G020730001_07_010");
MsgDisp("Mikage","Maybe it's different.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020730001_07_020");
MsgDisp("Mikage","Look, high school is only three years.
The things you see and experience during
that time are special.");
MsgDisp("主人公","｛御影＊＊｝...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G020730001_07_030");
MsgDisp("Mikage","So, now, what you see and experience with
whom, this is extremely important.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020730001_07_040");
MsgDisp("Mikage","It's not just you. Yanosuke and Inori are
also in the midst of an important time in
their lives. So, take a good look at
everything.");
MsgDisp("主人公","Yes.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("G020730001_07_050");
MsgDisp("Mikage","Next time, please come with both of them.");
MsgDisp("主人公","Yes, but, I'd also like to see it with
｛御影＊＊｝ again.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G020730001_07_060");
MsgDisp("Mikage","Thank you. Haa...I've said too much. Let's
take our time and burn it into our memory.");
MsgDisp("主人公","(｛御影＊＊｝ is always thinking of us...
that makes me happy.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
BGMStop();
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
