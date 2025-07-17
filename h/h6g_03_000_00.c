BGOpen("ho000",0);
ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
VoicePlay("H5G0300000_03_000")
MsgDisp("Honda","... Ah!
You're here.");
MsgDisp("主人公","Huh, ｛本多＊＊｝?
What is it?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H5G0300000_03_010")
MsgDisp("Honda","When I heard that you won an award in the
gardening club's competition, I couldn't
wait to see you.");
MsgDisp("主人公","Hehe, thanks for coming all this way.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("H5G0300000_03_020")
MsgDisp("Honda","Gardening's tricky. Even if it comes
easily to some people, there are still
times when it doesn't go as planned.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("H5G0300000_03_030")
MsgDisp("Honda","But you really are amazing, to raise your
flowers to an award-winning level even
despite that.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H5G0300000_03_040")
MsgDisp("Honda","Next time, could you come take a look at
the Pachira plant in my room?");
MsgDisp("主人公","(I did it!
I'm really glad I stayed in the gardening
club!)");
MsgClose();
ScrFadeOut(0,0);
