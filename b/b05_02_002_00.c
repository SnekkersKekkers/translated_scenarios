MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMPlay("BGM_PLACE_POOL",0.01);
MsgClose();
ChOpen(2,31,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","——ACHOO!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B050200200_02_000");
MsgDisp("Sassa","Hm? Are you cold?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoiceEVSPlay(2);
VoicePlay("B050200200_02_010");
MsgDisp("Sassa","｛主人公｝, come here.");
MsgDisp("主人公","Sure. Why?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B050200200_02_020");
MsgDisp("Sassa","I have a proposal.");
BGMStop();
MsgClose();
ScrFadeOut(0);
Wait(30,0);
ChClose(2,0,0);
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_03");
StlEye(2,0);
StlMouth(2,0);
SEPlay("EV_SE_572");
ScrFadeIn(0);
Wait(40,0);
StlEye(2,0);
StlMouth(2,0);
SEVol(0.3,2);
VoicePlay("B050200200_02_030");
MsgDisp("Sassa","Woo......It was waiting for us.
Let's warm up.");
MsgDisp("主人公","Yep, it's nice and warm.
Thanks, ｛颯砂＊＊｝.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("B050200200_02_040");
MsgDisp("Sassa","Look, it's so big in here that you
can even stretch your arms and legs out.");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("B050200200_02_050");
MsgDisp("Sassa","It makes me so happy I could sing.");
MsgDisp("主人公","Hehe!
It's like taking a bath.");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("B050200200_02_060");
MsgDisp("Sassa","Eh?
......Together?");
MsgDisp("主人公","Yeah?");
StlEye(2,2);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
StlCheek(2,10);
VoicePlay("B050200200_02_070");
MsgDisp("Sassa","That's crazy, though.
......You all covered in......steam.");
MsgDisp("主人公","Eh......EH∋
That's kind of embarrassing......");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("B050200200_02_080");
MsgDisp("Sassa","H-Huh, don't get embarrased!
This is a jacuzzi.");
MsgDisp("主人公","Y-Yeah.");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("B050200200_02_090");
MsgDisp("Sassa","U-Uhm, want to get out then?");
MsgDisp("主人公","Y-Yeah.");
StlEye(2,1);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
VoicePlay("B050200200_02_100");
MsgDisp("Sassa","Ah, you go first then.
I'll turn around.");
MsgDisp("主人公","Eh?
I'm still wearing a swimsuit, though?");
StlEye(2,0);
StlMouth(2,1);
VoicePlay("B050200200_02_110");
MsgDisp("Sassa","Haha, right.
It's not a bath, after all......");
SEStop("EV_SE_572",0.5);
Wait(10,0);
SEVol(0.7);
SEPlay("EV_SE_573",0.5);
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
EfctClose();
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp500",0);
ChOpen(2,255,3,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050200200_02_120");
MsgDisp("Sassa","Phew, it's warm, huh?");
MsgDisp("主人公","Yeah, even though we just came from
the pool.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("B050200200_02_130");
MsgDisp("Sassa","That hot spring feeling was great.");
ChEye(2,0);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","Hehe.
｛颯砂＊＊｝ must really like hot springs.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("B050200200_02_140");
MsgDisp("Sassa","Ahh.
Instead of going to a hot spring, next
time we can just come to the pool.");
MsgDisp("主人公","(｛颯砂＊＊｝'s face is still red. Is that
from the heat of the jacuzzi......?)");
BGMStop();
ChPrmTblAdd(2,0);
