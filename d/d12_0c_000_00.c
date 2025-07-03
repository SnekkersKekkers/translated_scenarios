BGOpen("sc500",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(My day is over and it's still only
the morning, maybe I should stop
somewhere on the way home?)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
ChOpen(6,254,0,0,0,-1,-1,0,2,0,30);
VoiceEVSPlay(5);
VoicePlay("D120C00000_05_000");
MsgDisp("Hiiragi","｛主人公｝, how about we get some 
lunch on the way home?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D120C00000_06_000");
MsgDisp("Himuro","You have time, right?");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝ and ｛氷室＊＊｝.
Yeah, that sounds good!");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D120C00000_06_010");
MsgDisp("Himuro","All that's left is Kojiro-sensei, then.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D120C00000_05_010");
MsgDisp("Hiiragi","That's correct. But I think it might be
troublesome if we were to invite him in
the staff room?");
MsgDisp("主人公","Yeah......Ah! I think ｛御影＊＊｝ 
is actually in the Gardening Club around 
this time?");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc612",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("D120C00000_07_000");
MsgDisp("Mikage?","You guysー
You have a good nose, huh?");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4,1);
MsgDisp("主人公","Eh......｛御影＊＊｝?");
VoicePlay("D120C00000_07_010");
MsgDisp("Mikage","Come this way, over here.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("D120C00000_06_020");
MsgDisp("Himuro","Nose......? What's that mean?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D120C00000_05_020");
MsgDisp("Hiiragi","I see......?
Shall we go then?");
MsgDisp("主人公","Okay......");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
VoicePlay("D120C00000_07_020");
MsgDisp("Mikage","Look, doesn't it make you hungry?");
MsgClose();
StlOpen("ev_0c_02");
StlEye(7,1);
StlMouth(7,1);
StlEye(6,0);
StlMouth(6,0);
StlEye(5,0);
StlMouth(5,0);
BGMPlay("BGM_SCHOOL_LUNCH",0.01,0.9);
SEPlay("EV_SE_807",1);
ScrFadeIn(0);
SEVol(0.2,5);
MsgDisp("主人公","Woah, it looks delicious......!");
StlEyeOpenLevel(5,0);
VoicePlay("D120C00000_05_030");
MsgDisp("Hiiragi","Yes. It has a good aroma.");
StlEyeOpenLevel(5,-1);
StlEye(7,2);
VoicePlay("D120C00000_07_030");
MsgDisp("Mikage","Usually I'm alone when I grill.
Come, let's eat before it burns, okay?");
StlEye(7,1);
StlMouth(7,0);
VoicePlay("D120C00000_07_040");
MsgDisp("Mikage","Inori, even vegetables you don't like
will taste delicious when grilled.");
MsgClose();
Wait(30,0);
StlNear(1,0,30);
Wait(40,0);
StlEye(6,0,0);
StlEyeOpenLevel(6,5,1);
StlMouth(6,0);
VoicePlay("D120C00000_06_030");
MsgDisp("Himuro","......Yeah.
Thanks for the food.");
MsgDisp("主人公","Hehe.
｛氷室＊＊｝, it's yummy, right?");
StlEye(6,2);
StlMouth(6,1);
VoicePlay("D120C00000_06_040");
MsgDisp("Himuro","I know.
Maybe I'll try a small piece......");
StlEye(6,0);
StlEye(5,1);
StlMouth(5,1);
VoicePlay("D120C00000_05_040");
MsgDisp("Hiiragi","......Delicious.
It feels like we're camping even though
we're at school.");
MsgClose();
StlEffect(1,1,15);
Wait(30,0);
StlMouth(5,0);
StlEye(6,1);
StlMouth(6,0);
VoicePlay("D120C00000_06_050");
MsgDisp("Himuro","The vegetables have a 
slightly sweet flavor......");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("D120C00000_07_050");
MsgDisp("Mikage","Haha, that's what I mean. The 
grill combined with the thrill of danger 
makes the vegetables delicious.");
MsgDisp("主人公","......The thrill of danger?");
StlEye(7,2);
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D120C00000_06_060");
MsgDisp("Himuro","Right, are you sure this is okay?
Having a barbecue at school.");
StlEye(7,1);
StlEyeOpenLevel(7,5,1);
VoicePlay("D120C00000_07_060");
MsgDisp("Mikage","A barbecue isn't allowed. But I
guess the extracurricular class \"Thermal 
Changes in Vegetables \" is fine?");
StlEye(6,0,0);
StlEyeOpenLevel(6,0,1);
StlMouth(6,0);
VoicePlay("D120C00000_06_070");
MsgDisp("Himuro","That's a bit risky.");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("D120C00000_07_070");
MsgDisp("Mikage","Well, either way this is my territory.
None of the other staff members will
come this way.");
StlEye(6,0);
StlMouth(6,0);
MsgDisp("主人公","…………");
StlEye(5,2);
StlMouth(5,1);
VoicePlay("D120C00000_05_050");
MsgDisp("Hiiragi","Ah, but the wind is blowing towards
the school!");
StlEye(7,1);
VoicePlay("D120C00000_07_080");
MsgDisp("Mikage","Huh? That's not good.
Let's get all the cooked food onto a
plate.");
StlMouth(6,1);
StlEye(5,1);
SEStop("EV_SE_807",2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(20,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChLayout(2);
MsgClose();
BGMVol(0.5,2);
ChOpen(7,37,0,0,0,-1,-1,0,0,0,30);
Wait(15,0);
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
Wait(15,0);
ChOpen(6,254,0,0,0,-1,-1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for the meal!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D120C00000_05_060");
MsgDisp("Hiiragi","It was delicious and fun.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D120C00000_07_090");
MsgDisp("Mikage","Ooh, good for the two of you.
Inori got to eat a bit too, right?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("D120C00000_06_080");
MsgDisp("Himuro","Beyond the bitterness was a little hint
of sweetness.");
MsgDisp("主人公","Hehe!
That's good.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("D120C00000_07_100");
MsgDisp("Mikage","Alright.
Let's get going before they find out.");
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","(Haa, that was fun!
Having a barbecue at school......
｛御影＊＊｝, thank you so much!)");
BGMStop();
MsgClose();
ChPrmTblAdd(5,0);
ChPrmTblAdd(6,0);
ChPrmTblAdd(7,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
