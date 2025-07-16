BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc744",0);
BGMPlay("BGM_ENGEKI_G",0.01);
ChLayout(1);
ChOpen(7,38,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P240700000_49_000");
MsgDisp("Narrator","Searching for his missing wife, Bai Niang,
Xu Xian waited tirelessly by the lake.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("P240700000_07_000");
MsgDisp("Mikage","I wonder how long has passed since I've
waited for you to pass by...");
MsgDisp("主人公","I am the incarnation of a thousand
year-old white snake.
You and I cannot live in the same age.");
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,0);
VoicePlay("P240700000_07_010");
MsgDisp("Mikage","Even if that is so, I will take you home.");
MsgDisp("主人公","You cannot.
I am not a human being.
I will only bring you sorrow.");
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,0,1);
VoicePlay("P240700000_07_020");
MsgDisp("Mikage","So what.
I'd rather live in sorrow than without
you.");
MsgDisp("主人公","If I were to return, the pursuers would go
after both you and yoru family.");
MsgClose();
ScrFadeOut(0);
ChClose(7,0,0);
StlOpen("ev_07_14");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
VoicePlay("P240700000_07_030");
MsgDisp("Mikage","What meaning is there in meekly allowing
time to pass when you aren't there?");
StlEyeOpenLevel(7,5,1);
VoicePlay("P240700000_07_040");
MsgDisp("Mikage","I don't need any more time apart from you.
Let's live together.");
MsgDisp("主人公","...Is that really okay?");
StlEyeOpenLevel(7,0,1);
VoicePlay("P240700000_44_000");
MsgDisp("School Girl A","Mikage-sensei, how wonderful...
He's like a real actor.");
VoicePlay("P240700000_45_000");
MsgDisp("School Girl B","Yeah, I'm shedding tears...");
VoicePlay("P240700000_33_030");
MsgDisp("Fahai","Don't mingle with humans, you demon!");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("P240700000_07_050");
MsgDisp("Mikage","It's dangerous!");
VoicePlay("P240700000_33_040");
MsgDisp("Fahai","Ehhh∈");
StlEyeOpenLevel(7,10,1);
StlMouth(7,0);
StlMouthOpenLevel(7,10);
SEPlay("EV_SE_735",0,0.9);
SEWait();
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("主人公","Ah...!");
VoicePlay("P240700000_49_010");
MsgDisp("Narrator","The lightning arrows sent by the pursuers
pierced through Bai Niang's back.");
BGOpen("sc744",0);
MsgClose();
ChOpen(7,38,0,2,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","This is... fine.
I can finally experience the same time you
do.");
ChEye(7,2);
ChMouth(7,1);
ChMotion(7,2);
VoicePlay("P240700000_07_060");
MsgDisp("Mikage","Don't go...!
Don't leave me behind.");
BGMStop(2);
SEPlay("EV_SE_GAYA_021");
SEPlay("EV_SE_CLAP_002");
SEPlay("EV_SE_CLAP_004",0,0.5);
MsgClose();
ScrFadeOut(0);
Wait(100,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEStop("EV_SE_CLAP_002",1.5);
SEStop("EV_SE_CLAP_004",1.5);
SEStop("EV_SE_GAYA_021",1.5);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
BGOpen("sc740",0);
ScrFadeIn(0);
VoicePlay("P240700000_07_070");
MsgDisp("Mikage","Phew...
Somehow I managed to stand in as a
substitute.");
MsgDisp("主人公","｛御影＊＊｝!
The applause was huge!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P240700000_07_080");
MsgDisp("Mikage","I had to give it my all for the students
who are feeling frustrated");
MsgDisp("主人公","Yes, thank you very much!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
ChEyeOpenLevel(7,0);
VoicePlay("P240700000_07_090");
MsgDisp("Mikage","That goes for me too.
While I was saying the lines, it helped me
organize my own thoughts.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("P240700000_07_100");
MsgDisp("Mikage","\"What meaning is there in meekly allowing
time to pass when you aren't there?\"......");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P240700000_07_110");
MsgDisp("Mikage","I said that in front of everyone.
How heavy.");
MsgDisp("主人公","...｛御影＊＊｝?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P240700000_07_120");
MsgDisp("Mikage","Oh, come on let's go find everyone!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(I wonder what that was about...? Speaking
of in the middle of the performance
｛御影＊＊｝ suddenly
changed...)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
