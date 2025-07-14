BGOpen("sc710",0);
ChLayout(1);
BGMPlay("BGM_FESTIVAL",0.01);
ScrFadeIn(0);
VoicePlay("D010800000_08_000");
MsgDisp("Daichi?","Look over here, big bro!");
MsgDisp("主人公","(Huh?　That voice just now......)");
MsgClose();
ChOpen(8,254,0,0,3,#1,#1,0,1);
ChOpen(9,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","｛大地＊＊｝ and......Kuya-san∋");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,1,1);
VoicePlay("D010800000_08_010");
VoiceEVSPlay(8);
MsgDisp("Daichi","We came to visit, ｛主人公｝.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("D010800000_09_000");
MsgDisp("Kuya","Sorry for the trouble.");
MsgDisp("主人公","Ehh∋
The two of you are brothers?");
ChEye(8,3);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
VoicePlay("D010800000_08_020");
MsgDisp("Daichi","Hehe, I guess so.");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("D010800000_09_010");
MsgDisp("Kuya","......Dai-chan, we have to go back soon.");
MsgDisp("主人公","Ah......right!
Hanegasaki also has their school festival
today, right?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(8,3,1);
ChEyeOpenLevel(8,#1);
VoicePlay("D010800000_08_030");
MsgDisp("Daichi","Yeah.
Speaking of which, let's go!");
MsgDisp("主人公","Ehh∋");
MsgClose();
ScrFadeOut(0);
ChEye(8,0);
ChEye(9,0);
ChMouth(8,3);
ChMouth(9,0);
ChMotion(8,0,1);
ChMotion(9,0,1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ex130",0);
ScrFadeIn(0);
MsgDisp("主人公","(We're at Hanegasaki High School......)");
ChEye(8,3);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("D010800000_08_040");
MsgDisp("Daichi","Welcome to Hanegasaki High School's
cultural festival～!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D010800000_09_020");
MsgDisp("Kuya","The Shirahane brothers will escort
you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(8,0,30);
ChClose(9,0,30);
SEWait();
StlOpen("ev_08_08");
StlEye(8,0);
StlMouth(8,0);
StlEye(9,0);
StlMouth(9,0);
ScrFadeIn(0);
VoicePlay("D010800000_08_050");
MsgDisp("Daichi","Over there is my class!
This year we made a disco......
but it looks like it's already over.");
MsgDisp("主人公","Disco......? I would have wanted to see
that.");
StlEyeOpenLevel(9,5,1);
VoicePlay("D010800000_09_030");
MsgDisp("Kuya","We were searching for you and your stall
back at Habataki High School.
I guess we're late getting back here.");
StlEyeOpenLevel(8,5,1);
VoicePlay("D010800000_08_060");
MsgDisp("Daichi","That's true......
But some places are still open, so let's
hurry!");
MsgDisp("主人公","O-Okay!");
VoicePlay("D010800000_42_000");
MsgDisp("Male Student A","Oi, Daichi!
You have a girl from Habataki with you,
what's that about∋");
StlEyeOpenLevel(9,#1);
StlEye(8,1);
VoicePlay("D010800000_08_070");
MsgDisp("Daichi","Hehe!
I guess I can brag about it?");
VoicePlay("D010800000_42_010");
MsgDisp("Male Student A","Don't tell me......Your girlfriend∋");
StlEyeOpenLevel(8,0,1);
VoicePlay("D010800000_08_080");
MsgDisp("Daichi","Hey, don't get ahead of yourself.");
StlEyeOpenLevel(9,5,1);
StlEyeOpenLevel(8,#1);
VoicePlay("D010800000_08_090");
MsgDisp("Daichi","She's a special guest of the Shirahane
brothers▼");
StlEyeOpenLevel(9,0,1);
VoicePlay("D010800000_09_040");
MsgDisp("Kuya","That's right.
Well then, we're in a hurry.");
StlEyeOpenLevel(9,#1);
VoicePlay("D010800000_33_020");
MsgDisp("Male Student B","Daichi! Who is that girl∋ She's wearing a
Habataki uniform!");
StlEye(8,1);
StlEyeOpenLevel(8,5,1);
VoicePlay("D010800000_08_100");
MsgDisp("Daichi","Awesome, huh......
I wonder if they'll keep bothering us like
this while we're here?");
StlEyeOpenLevel(9,5,1);
VoicePlay("D010800000_09_050");
MsgDisp("Kuya","We knew they would do this, though.
Come, let's go.");
StlEyeOpenLevel(9,#1);
StlEyeOpenLevel(8,0,1);
VoicePlay("D010800000_08_110");
MsgDisp("Daichi","In that case, it's time for the final
sprint!");
StlEye(8,0);
MsgDisp("主人公","(Ehh! Even though I just got here it's
already the final sprint∋)");
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc700",0);
MsgClose();
ChOpen(8,254,0,0,3,#1,#1,0,1);
ChOpen(9,254,0,0,0,#1,#1,0,2);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me back. The
festival at Hanegasaki was really amazing.
I had a good time!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,4,1);
VoicePlay("D010800000_08_120");
MsgDisp("Daichi","We're the ones who should be sayin' that,
right!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,3,1);
VoicePlay("D010800000_09_060");
MsgDisp("Kuya","Yeah. I made so many fun memories at my
last school festival.");
MsgDisp("主人公","Oh, right, Kuya-san is a senior......");
ChEye(8,3);
ChMouth(8,3);
ChEyeOpenLevel(8,0);
VoicePlay("D010800000_08_130");
MsgDisp("Daichi","Isn't that great, big bro.");
ChEye(8,0);
ChMouth(8,0);
ChEye(9,4);
ChMouth(9,4);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("D010800000_09_070");
MsgDisp("Kuya","Ah......Dai-chan, the time!
If we don't help clean up, we'll ruin all
those good memories.");
ChEye(8,2);
ChMouth(8,1);
ChMotion(8,0,1);
VoicePlay("D010800000_08_140");
MsgDisp("Daichi","Ah geez......that's true!");
ChEye(9,3);
ChMouth(9,0);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("D010800000_08_150");
MsgDisp("Daichi","It's really nice of you to come with us
today. We'll talk more later so look
forward to it!");
MsgClose();
BGMStop();
SEPlay("EV_SE_856");
ChClose(8,0,30);
ChClose(9,0,30);
MsgDisp("主人公","(The second half was a blur......)");
MsgDisp("主人公","(But it's impossible not to have a good
time when you attend both the Hanegasaki
and Habataki festivals......!)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(8,0);
