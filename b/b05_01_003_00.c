BGOpen("fp610",0);
ChLayout(1);
ChClose(1,0,0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(｛風真＊＊｝ is great at skating.
It's really amazing that he's good at both
school and sports...)");
SEPlay("EV_SE_509");
SEWait();
MsgClose();
ChOpen(1,255,0,4,2,0,#1,0,0);
VoicePlay("B050100300_01_000");
MsgDisp("Kazama","Phew.");
ChEye(1,0);
ChMouth(1,3);
MsgDisp("主人公","Good work.
You must be thirsty, would you like
something to drink?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B050100300_01_010");
MsgDisp("Kazama","I'm alright.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B050100300_01_020");
MsgDisp("Kazama","You're the one who must be cold, having to
stand there the entire time.");
MsgDisp("主人公","A little...But, it was really exciting
seeing ｛風真＊＊｝ glide
across the ice!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B050100300_01_030");
MsgDisp("Kazama","Hmm.
Then, why don't you give it a try?");
MsgDisp("主人公","You're going back already?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChMouthOpenLevel(1,0);
VoicePlay("B050100300_01_040");
MsgDisp("Kazama","......");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
Wait(60,0);
StlOpen("ev_01_06");
StlEye(1,0);
StlMouth(1,0);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
ScrFadeIn(0);
VoicePlay("B050100300_01_050");
MsgDisp("Kazama","You're pulling backー.
Look straight ahead.
Don't let go of my hand～");
MsgDisp("主人公","Y-Yes!");
StlEye(1,0);
StlEyeOpenLevel(1,5,1);
StlMouth(1,1);
VoicePlay("B050100300_01_060");
MsgDisp("Kazama","Look, your right ankle is slanted again.
You might injure yourself, so stand up
straight. Ah, it's okay to take your time.");
MsgDisp("主人公","(Ugh...
If it were that simple, I wouldn't be
struggling like this...)");
SEPlay("EV_SE_510",0,0.8);
Wait(10,0);
StlEyeOpenLevel(1,#1);
StlMouthOpenLevel(1,10);
ScrQuake(1);
MsgDisp("主人公","Waa∈ ｛風真＊＊｝, you can't
let go of my hand no matter what∋");
StlEye(1,1);
StlMouth(1,1);
StlMouthOpenLevel(1,#1);
StlCheek(1,7);
VoicePlay("B050100300_01_070");
MsgDisp("Kazama","......");
MsgDisp("主人公","Phew...I'm steady now...Huh,
｛風真＊＊｝, your face is red.
Are you cold?");
StlEyeOpenLevel(1,5);
StlCheek(1,7);
VoicePlay("B050100300_01_080");
MsgDisp("Kazama","...I feel kind of guilty.");
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGMVol(0.5,2);
MsgClose();
ChOpen(1,255,0,2,2,0,#1,0,0);
ScrFadeIn(0);
ChMotion(1,3);
ChEyeOpenLevel(1,#1);
VoicePlay("B050100300_01_090");
MsgDisp("Kazama","I'm really sorry.");
MsgDisp("主人公","Eh.
Why are you apologizing?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("B050100300_01_100");
MsgDisp("Kazama","I need to reflect on my wicket thoughts.");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("B050100300_01_110");
MsgDisp("Kazama","Honestly...your skating skills didn't
really matter.
Just that...your hand...");
MsgDisp("主人公","Hand?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B050100300_01_120");
MsgDisp("Kazama","You couldn't skate, but I tried to drag
you out onto the rink.
It was scary, right?");
MsgDisp("主人公","Nope, I had fun. ｛風真＊＊｝
held my hand the whole time. I was glad
that he taught me how to skate carefully.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B050100300_01_130");
MsgDisp("Kazama","......");
ChEye(1,2);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B050100300_01_140");
MsgDisp("Kazama","I truly am really sorry!");
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","(Why are you apologizing...∋)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChPrmTblAdd(1,0);
