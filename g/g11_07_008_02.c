BGOpen("sc210",0);
SEPlay("EV_SE_821",0.4,0.6);
ScrFadeIn(0);
MsgDisp("主人公","I'll give you lot's of water today too～");
VoiceEVSPlay(7);
VoicePlay("G110700802_07_000");
MsgDisp("Mikage?","｛主人公｝.");
SEStop("EV_SE_821",2);
MsgDisp("主人公","Ah, ｛御影＊＊｝.
Good morning!");
MsgClose();
MsgClose();
ScrFadeOut(0);
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110700802_07_010");
MsgDisp("Mikage","That's nice. 
Do you always talk to them like that?");
MsgDisp("主人公","Eh, talking? 
I guess I wasn'yt really aware of it......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700802_07_020");
MsgDisp("Mikage","Isn't that great? They say plants grow
better if you talk to them.");
MsgDisp("主人公","Does ｛御影＊＊｝ talk to them all the time
too?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700802_07_030");
MsgDisp("Mikage","Well, just like with people, there are all
kinds of plants. Tomatoes and potatoes
taste better when grown with the minimum
amount of water.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700802_07_040");
MsgDisp("Mikage","There are some that's better to be spartan
with, there are some that are better to be
gentle with.");
MsgDisp("主人公","S-Spartan......?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700802_07_050");
MsgDisp("Mikage","Yes. It is precisely because you love them
that you are strict.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700802_07_060");
MsgDisp("Mikage","What type are you?");
MsgDisp("主人公","(Umm......me......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
