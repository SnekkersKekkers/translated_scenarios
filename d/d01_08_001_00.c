BGOpen("ar300",0);
ChLayout(1);
MsgClose();
ChOpen(8,35,0,3,3,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("D010800100_08_000");
MsgDisp("Shirahane","Okay, 5 Rich will be your change.");
VoicePlay("D010800100_48_000");
MsgDisp("Woman Customer A","Oh my, what lovely service.
Can't you give me a bit more～?");
ChEye(8,2);
ChMouth(8,1);
ChMotion(8,3,1);
VoicePlay("D010800100_08_010");
MsgDisp("Shirahane","I can't give you more.
The store would go broke!");
VoicePlay("D010800100_48_010");
MsgDisp("Woman Customer A","Hahaha!
Thank you, then～!");
SEPlay("EV_SE_589");
Wait(30,0);
ChEye(8,3);
ChMouth(8,3);
ChEyeOpenLevel(8,0);
VoicePlay("D010800100_08_020");
MsgDisp("Shirahane","Thank you for coming～!");
SEStop("EV_SE_589",2);
MsgDisp("主人公","(Hehe, ｛大地＊＊｝ is doing well today,
too.)");
MsgClose();
ScrFadeOut(0);
ChClose(8);
BGMPlay("BGM_C08_DAICHI_I",0.01);
StlOpen("ev_08_05");
StlEye(8,0);
StlMouth(8,0);
ScrFadeIn(0);
VoicePlay("D010800100_08_030");
MsgDisp("Shirahane","Alright, alright......Okay, stop!
Thanks like always, Kondo-san!");
VoicePlay("D010800100_43_020");
MsgDisp("Male Customer A","It's time for the big girl, today.
Wash her up and give her a full tank
please.");
StlEyeOpenLevel(8,5);
VoicePlay("D010800100_08_040");
MsgDisp("Shirahane","No problem!
You can have some coffee at the service
counter while you wait.");
VoicePlay("D010800100_08_050");
MsgDisp("Shirahane","Ah, the coffee is free but please limit
yourself to less than 20 cups!");
VoicePlay("D010800100_43_030");
MsgDisp("Male Customer A","I'd be too full if I drank all that
coffee. My mom will get mad at me if 
I don't eat dinner!");
StlEyeOpenLevel(8,-1);
VoicePlay("D010800100_08_060");
MsgDisp("Shirahane","The shop would also go bankrupt due to
coffee costs, so let's help each other
out!");
VoicePlay("D010800100_39_040");
MsgDisp("Male Customer B","Dai-chan, how many candies are okay
to take?");
StlEye(8,1,0);
StlEyeOpenLevel(8,5,1);
VoicePlay("D010800100_08_070");
MsgDisp("Shirahane","I'd say 1 handful but you have big
hands so......1 pinch!");
VoicePlay("D010800100_39_050");
MsgDisp("Male Customer B","Ahaha!");
VoicePlay("D010800100_45_000");
MsgDisp("Woman Customer B","Okay, I'll get you a handful then.
That's okay, right? Daichi-kun▼");
StlEyeOpenLevel(8,-1);
VoicePlay("D010800100_08_080");
MsgDisp("Shirahane","For our lady customers......Sure!
You can have two handfuls!");
SEPlay("EV_SE_634");
Wait(50,0);
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(8,35,0,3,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("D010800100_08_090");
MsgDisp("Shirahane","Thank you for coming～!");
MsgDisp("主人公","｛大地＊＊｝ was popular today, huh?");
ChEye(8,2);
ChMouth(8,3);
VoicePlay("D010800100_08_100");
MsgDisp("Shirahane","It's not like that.
Those people come here all the time.");
MsgDisp("主人公","But it looked like they came here
just to see you, ｛大地＊＊｝.");
ChEye(8,0);
ChMouth(8,2);
ChMotion(8,2,1);
VoicePlay("D010800100_08_110");
MsgDisp("Shirahane","Now that I think about it, everyone
always comes over during my shift.
......I guess they wanted to see me?");
MsgDisp("主人公","Hehe, I'm sure that's it.
Because ｛大地＊＊｝ is such a 
famous salesman.");
ChEye(8,3);
ChMouth(8,4);
ChMotion(8,4,1);
ChEyeOpenLevel(8,0);
ChCheek(8,5);
VoicePlay("D010800100_08_120");
MsgDisp("Shirahane","You're praising me too much～
Saying I'm some popular salesman!");
MsgDisp("主人公","(Hehe! Customers really seem to love
｛大地＊＊｝. His popularity is a bit
different from ｛風真＊＊｝ 's, though.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
ChPrmTblAdd(8,0);
