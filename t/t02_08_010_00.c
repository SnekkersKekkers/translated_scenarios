MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ChOpen(8,254,0,0,5,#1,#1,0,0);
BGMPlay("BGM_C08_DAICHI_KOKU",0.01);
ScrFadeIn(0);
VoicePlay("T020801000_08_000");
MsgDisp("Shirahane","The door is open...
What is th——");
MsgDisp("主人公","Eh, ｛大地＊＊｝∋
Why are you here...");
ChEye(8,4);
ChMouth(8,5);
ChMotion(8,4,1);
VoicePlay("T020801000_08_010");
MsgDisp("Shirahane","Eh-?
This...");
ChEye(8,2);
ChMouth(8,1);
ChMotion(8,1,1);
VoicePlay("T020801000_08_020");
MsgDisp("Shirahane","Wait a second.
The real thing is over there.");
MsgDisp("主人公","Eh∋");
MsgClear();
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClear();
BGOpen("ev010",1);
ScrFadeIn(0);
MsgDisp("主人公","(This is...
Hanegasaki lighthouse...)");
MsgClear();
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_773",0,0.9);
SEWait();
MsgDisp("主人公","(Ah...)");
MsgClear();
BGOpen("ev009",1);
ScrFadeIn(0);
MsgDisp("主人公","(It's a picture of a mermaid and a young
man.
It's a bit sad, but they look happy...)");
MsgClear();
MsgClose();
ScrFadeOut(0);
BGOpen("ex990",0);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_011",0,1);
BGOpen("ev011",1);
BGOpen("ev012",1);
BGOpen("ev013",1);
MsgClose();
ScrFadeOut(0,1,90);
BGOpen("ev014",1);
ScrFadeIn(0);
MsgDisp("主人公","Wow, the sea is beautiful...");
MsgClear();
MsgType(1);
ScrFadeOut(0,1,90);
BGOpen("ex980",0);
ChLayout(0);
ChOpen(8,254,0,3,3,0,#1,0,0);
ScrFadeIn(0);
VoicePlay("T020801000_08_030");
MsgDisp("Shirahane","Haa...sorry for the wait.");
ChEye(8,4);
ChEyeOpenLevel(8,10);
MsgDisp("主人公","No, it's okay.
Why are we here?");
ChEye(8,4);
ChMouth(8,0);
VoicePlay("T020801000_08_040");
MsgDisp("Shirahane","This lighthouse is the legendary
confession spot at Hanegasaki High School.");
MsgDisp("主人公","Ah...");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("T020801000_08_050");
MsgDisp("Shirahane","Sorry.
Honestly, maybe the Haba High Church would
have been better.");
ChEye(8,3);
ChMouth(8,4);
ChEyeOpenLevel(8,10);
VoicePlay("T020801000_08_060");
MsgDisp("Shirahane","But I had decided.
I was going to confess to you here.");
MsgDisp("主人公","｛大地＊＊｝...");
VoiceEVSPlay(8);
VoicePlay("T020801000_08_061");
MsgDisp("Shirahane","｛主人公｝.");
VoicePlay("T020801000_08_070");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,2,1);
MsgDisp("Shirahane","Until I met you, I thought I was getting
by in life and doing everything well.");
VoicePlay("T020801000_08_080");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
MsgDisp("Shirahane","In fact, I didn't have any worries and I
was doing well in both studies and sports.");
VoicePlay("T020801000_08_090");
ChEye(8,4);
ChMouth(8,4);
MsgDisp("Shirahane","But...the excitement I felt due to you
and to Haba High, made me begin to feel
like something was missing...");
VoicePlay("T020801000_08_100");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,4,1);
MsgDisp("Shirahane","The day I saw the autumn fireflies, I
realized that I couldn't continue like
this.");
VoicePlay("T020801000_08_110");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
MsgDisp("Shirahane","I pretended to seek perfection, but in
reality I was just complacent.");
VoicePlay("T020801000_08_120");
ChEye(8,4);
ChMouth(8,4);
MsgDisp("Shirahane","I'm not going to end my high school life
as such a half-assed guy.
I... want you to acknowledge me.");
MsgClear();
ChClose(8);
ChCustomLayout(8,5,0,-2.5);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(8,254,0,3,4,10,#1,3,0,0,120);
VoicePlay("T020801000_08_130");
MsgDisp("Shirahane","I've liked you since I met you.");
MsgDisp("主人公","!");
VoicePlay("T020801000_08_140");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,2,1);
MsgDisp("Shirahane","But, being a half-assed man, I never
confessed to you.");
VoicePlay("T020801000_08_150");
ChEye(8,4);
ChMouth(8,4);
MsgDisp("Shirahane","So, in order to be worthy of you...
I've been polishing myself up to become a
better man.");
VoicePlay("T020801000_08_160");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,0,1);
ChEyeOpenLevel(8,10);
MsgDisp("Shirahane","Please...stay with me.");