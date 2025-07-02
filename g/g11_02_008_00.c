BGOpen("ex110",0);
ScrFadeIn(0);
MsgDisp("主人公","(Today's a session to beat the record.
I wish everyone good luck!)");
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,3,0,4,-1,-1,0,0);
VoicePlay("G110200800_02_000");
MsgDisp("Sassa","Thanks for your help, manager!");
MsgDisp("主人公","｛颯砂＊＊｝, that's a nice record.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G110200800_02_010");
MsgDisp("Sassa","Yeah, it's all thanks to you.
Join me for a cool down,
run!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_037");
ChOpen(2,100,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110200800_02_020");
MsgDisp("Sassa","Ha, Ha, Ha...");
MsgDisp("主人公","｛颯砂＊＊｝, you seem satisfied.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200800_02_030");
MsgDisp("Sassa","Yeah. I was able to beat 4 of the
records I signed up to compete in.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200800_02_040");
MsgDisp("Sassa","It really is the best feeling.");
MsgDisp("主人公","Congratulations!");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200800_02_050");
MsgDisp("Sassa","It feels like I was made for
first place at sports day.
Is that childish?");
MsgDisp("主人公","Not at all.
I think it's amazing you can keep
that place for so long.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200800_02_060");
MsgDisp("Sassa","Yeah, thank you. I'm really happy
that I've been able to do that.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200800_02_070");
MsgDisp("Sassa","I'm gonna go run a little harder!
See ya.");
MsgClose();
BGMStop();
SEStop("EV_SE_FOOT_037",1.5);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
BGOpen("ex110",0);
ScrFadeIn(0);
MsgDisp("主人公","(He's gone... huh? Wasn't this
supposed to be a cool down run?)");
MsgClose();
ScrFadeOut(0,0);
