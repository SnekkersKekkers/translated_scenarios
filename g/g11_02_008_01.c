BGOpen("sc608",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, Finally, the calculation of the
club expenses is finished......)");
SEPlay("EV_SE_DOOR_013");
SEWait();
MsgClose();
SEPlay("EV_SE_FOOT_039");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("G110200801_02_000");
MsgDisp("Sassa","｛主人公｝, So, you were here.");
MsgDisp("主人公","Yeah, I was in charge of the club
expenses.
But......It's over.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G110200801_02_010");
MsgDisp("Sassa","I see, must've been tough.");
MsgDisp("主人公","What did ｛颯砂＊＊｝ want?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200801_02_020");
MsgDisp("Sassa","Ah, what was it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G110200801_02_030");
MsgDisp("Sassa","I forgot.
Well, come out quickly.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(???)");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200801_02_040");
MsgDisp("Sassa","Haa, haa, haa......
I feel more calm when I run with you like
this.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200801_02_050");
MsgDisp("Sassa","The other day in the club room, I had my
heart rate measured, and it was a
disaster, right?");
MsgDisp("主人公","Ah, right.
I fixed the measuring device so it's fine
now.");
ChEye(2,0);
ChMouth(2,1);
ChMotion(2,0);
VoicePlay("G110200801_02_060");
MsgDisp("Sassa","Hmmm, not really.
It's been weird since then......");
MsgDisp("主人公","Eh......?");
ChEye(2,0);
ChMouth(2,1);
ChMotion(2,0);
VoicePlay("G110200801_02_070");
MsgDisp("Sassa","Just now when I came to the clubroom to
talk to you, it was a bit crazy.");
ChEye(2,0);
ChMouth(2,1);
ChMotion(2,0);
VoicePlay("G110200801_02_080");
MsgDisp("Sassa","It seems like this'll drag on for a
while......");
MsgDisp("主人公","Umm......The high-altitude training?");
ChEye(2,2);
ChMouth(2,1);
ChMotion(2,1);
VoicePlay("G110200801_02_090");
MsgDisp("Sassa","Yes, that's it.
Once in a while your touch──");
ChEye(2,0);
ChMouth(2,1);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("G110200801_02_100");
MsgDisp("Sassa","......What am I saying∋
This is no good, I need to push myself
harder!");
MsgClose();
BGMStop();
SEStop("EV_SE_FOOT_037",1.5);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("sc601",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ehh∋
Wasn't it a cooldown......?)");
MsgClose();
ScrFadeOut(0,0);
