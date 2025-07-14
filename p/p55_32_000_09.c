BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgDisp("主人公","It was a huge fail...
Even though it was my last concert...");
VoicePlay("P553200009_32_000");
MsgDisp("VP Himuro?","...What are you doing here.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(32,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Himuro-sensei, I'm sorry.
I didn't practice enough...");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200009_32_010");
MsgDisp("VP Himuro","Is that right.
Then, what will you do?");
MsgDisp("主人公","Ummm...");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("P553200009_32_020");
MsgDisp("VP Himuro","The song performed today, 'Fourth・Heart'
has several different interpretations.");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("P553200009_32_030");
MsgDisp("VP Himuro","With the hope of bringing harmony into the
hearts of first years, second years and
third years and alumni, I waved my
conductor baton.");
MsgDisp("主人公","As for me,
I inconvenienced everyone...");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("P553200009_32_040");
MsgDisp("VP Himuro","I see.. If that is true, then the first
thing you should do is to not be
dispirited by yourself.");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("P553200009_32_050");
MsgDisp("VP Himuro","Come join your hearts with the juniors who
watched you from behind, and the friends
you walked together with.");
MsgDisp("主人公","Yes...!");
MsgDisp("主人公","(Even though I failed in the end...
I'm glad I continued with the wind music
club for these last three years.)");
MsgClose();
ScrFadeOut(0);
ChClose(32,0,0);
