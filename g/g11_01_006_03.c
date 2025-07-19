BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(That's right...｛風真＊＊｝ said he had
something he wanted to talk to me about
when we go home ...DId something happen?)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","That's right.
You had something you wanted to talk
about?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100603_01_000");
MsgDisp("Kazama","Yeah, about Nanatsumori.");
MsgDisp("主人公","｛七ツ森＊｝?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100603_01_010");
MsgDisp("Kazama","That guy really knows about trends and
cutting-edge information.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100603_01_020");
MsgDisp("Kazama","Does he give you that kind of advice?");
MsgDisp("主人公","Like what?
He does teach me about fashion though.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110100603_01_030");
MsgDisp("Kazama","Well if you like it, that's fine.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100603_01_040");
MsgDisp("Kazama","...But I don't want you to change because
of that guy's information.");
MsgDisp("主人公","Eh, change?
But I'm just trying to experiment with
different types of fashion?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100603_01_050");
MsgDisp("Kazama","I see...
If you choose to do it because you like
it, that's fine.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110100603_01_060");
MsgDisp("Kazama","But after experimenting with different
things, it would be good if you could come
back. A return to where you started?");
MsgDisp("主人公","(Return to where I started?
｛風真＊＊｝, you are talking about
fashion, right?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
