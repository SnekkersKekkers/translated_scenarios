BGOpen("bh310",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
ScrFadeIn(0);
VoicePlay("B050300200_03_000");
MsgDisp("Honda","There's something I want to show you
today.");
MsgDisp("主人公","What do you want to show me?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B050300200_03_010");
MsgDisp("Honda","We found something nostalgic in the
attic. Close your eyes for a moment
while I get it ready, okay?");
MsgDisp("主人公","Sure, gotcha.");
MsgClose();
ScrFadeOut(3,30);
Wait(20,0);
SEPlay("EV_SE_575",0,0.9);
SEWait();
VoicePlay("B050300200_03_020");
MsgDisp("Honda","——Okay. It's ready.
You can open your eyes now.");
MsgDisp("主人公","......Okay.");
MsgClose();
ChClose(3);
BGMPlay("BGM_C03_HONDA_I",0.01);
StlOpen("ev_03_04");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(4);
MsgDisp("主人公","Uwaah......Pretty!");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("B050300200_03_030");
MsgDisp("Honda","This is the planetarium that I built
back in elementary school.");
MsgDisp("主人公","Woah, that's awesome!
You know how to build your own
planetarium?");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300200_03_040");
MsgDisp("Honda","It's simple to make one using some
black construction paper, a flashlight,
and colored cellophane sheets.");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300200_03_050");
MsgDisp("Honda","The mechanism itself is the same
as an actual planetarium. ");
MsgDisp("主人公","That's really amazing!
｛本多＊＊｝ can do
some commentary now.");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,0);
VoicePlay("B050300200_03_060");
MsgDisp("Honda","——Ahem.
Please take a look. Can you spot those
three stars sparkling in the night sky?");
MsgDisp("主人公","Hehe, it's like the real thing!");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("B050300200_03_070");
MsgDisp("Honda","Those three stars are located in the
belt of Orion.");
VoicePlay("B050300200_03_080");
MsgDisp("Honda","They are your guiding stars when
searching for Orion, the winter
constellation.");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("B050300200_03_090");
MsgDisp("Honda","Next, please look to the right. 
There you can see Betelgeuse, the second
brightest star in the Orion
constellation.");
MsgClose();
BGMVol(0.5,2);
ScrFadeOut(0);
StlClose();
Wait(20,0);
SEPlay("EV_SE_575",0,0.9);
SEWait();
MsgClose();
ChOpen(3,253,4,0,3,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B050300200_03_100");
MsgDisp("Honda","——So, it would go something like that.");
MsgDisp("主人公","Were you explaining things like this
back in elementary school too?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("B050300200_03_110");
MsgDisp("Honda","Yeah. My sister really liked it, so
we had fun memorizing the stars.");
MsgDisp("主人公","That kind of upbringing made
｛本多＊＊｝ who he
is today, huh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("B050300200_03_120");
MsgDisp("Honda","I guess that's true.
Teaching  people things makes
me happy.");
ChEye(3,3);
ChMouth(3,3);
ChMouth(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("B050300200_03_130");
MsgDisp("Honda","It's good that I discovered how much
fun this sort of thing could be back in
elementary school. To be honest, it's
how I got started.");
MsgDisp("主人公","(｛本多＊＊｝
has a really happy look on his face......)");
BGMStop();
ChPrmTblAdd(3,0);
