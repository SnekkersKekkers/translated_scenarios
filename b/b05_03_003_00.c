BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,5,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B050300300_03_000");
MsgDisp("Honda","Huh?
Wait a minute...");
MsgDisp("主人公","What's wrong?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("B050300300_03_010");
MsgDisp("Honda","It looks like one is missing. １, ２,
３...
Like I thought.");
MsgDisp("主人公","?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B050300300_03_020");
MsgDisp("Honda","Excuse me, Zookeeper-san. What happened to
the giant isopods? One isn't here, right?");
VoicePlay("B050300300_34_000");
MsgDisp("Staff","Y-You, you're right, actually.
We said goodbye to it this morning.");
ChEye(3,5);
BGMStop();
VoicePlay("B050300300_03_030");
MsgDisp("Honda","Eh...said goodbye...");
VoicePlay("B050300300_34_010");
MsgDisp("Staff","It hadn't eaten in a while.");
ChEye(3,2);
ChMouth(3,2);
ChMotion(3,2);
VoicePlay("B050300300_03_040");
MsgDisp("Honda","That...");
MsgClose();
ScrFadeOut(0);
ChClose(3);
BGMPlay("BGM_C03_HONDA_C",0.01);
StlOpen("ev_03_05");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(0);
MsgDisp("主人公","｛本多＊＊｝...are you okay?");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5);
VoicePlay("B050300300_03_050");
MsgDisp("Honda","Guso-kun was the one I fed the first time
I came here with my family...");
StlEye(3,0,0);
StlMouth(3,0);
StlEyeOpenLevel(3,0);
VoicePlay("B050300300_03_060");
MsgDisp("Honda","But that was the last time.
I haven't fed him in four years.");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(3,253,0,2,2,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B050300300_03_070");
MsgDisp("Honda","So I was hoping I got to feed him again
when I came this time.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B050300300_03_080");
MsgDisp("Honda","But it didn't work out.
I wanted you to see him too.");
MsgDisp("主人公","I see...that's unfortunate.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B050300300_03_090");
MsgDisp("Honda","Yeah...
But the rest of them are still here.
So let's come and feed them again!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B050300300_03_100");
MsgDisp("Honda","We have to continue on, otherwise coming
here was pointless.");
MsgDisp("主人公","(｛本多＊＊｝ is so sweet.)");
BGMStop();
ChPrmTblAdd(3,0);
