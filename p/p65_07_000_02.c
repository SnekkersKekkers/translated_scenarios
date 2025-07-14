MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P650700002_07_000");
MsgDisp("Mikage","As expected of our Gardening Club.
Our original blend was well liked.");
MsgDisp("主人公","｛御影＊＊｝, was it really?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700002_07_010");
MsgDisp("Mikage","Yeah. The classroom next door thanked us
for the herbs helping them relax.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("P650700002_07_020");
MsgDisp("Mikage","Alright, after this let's raise a toast
using this herbal tea.");
MsgDisp("主人公","(Yay, a huge success!
I was able to make a nice memory...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
