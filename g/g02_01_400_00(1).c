MsgClose();
ChOpen(1,255,7,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020140000_01_000");
MsgDisp("Kazama","When I think of each light as a life, it
feels a bit scary.");
MsgDisp("主人公","Yeah,
maybe that's why they're so beautiful.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020140000_01_010");
MsgDisp("Kazama","Ehh, that's a nice thing to say.
I think so too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140000_01_020");
MsgDisp("Kazama","It seems like everyone's trying their
hardest to shine.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140000_01_030");
MsgDisp("Kazama","Hey, how would you rank them?");
MsgDisp("主人公","Rank?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020140000_01_040");
MsgDisp("Kazama","I mean, if you don't rank them, you can't
choose just one, right?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140000_01_050");
MsgDisp("Kazama","With studying for tests, sports
competitions, or contests, it's easy
because there are rankings. You know how
much effort to put in.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020140000_01_060");
MsgDisp("Kazama","But how do you choose a life partner among
all of these?");
MsgDisp("主人公","Umm, ｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020140000_01_070");
MsgDisp("Kazama","I can work hard at studying or sports. But
this is different, right? It's scary not
knowing how to direct my efforts.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140000_01_080");
MsgDisp("Kazama","If we could teach them the rules or
criteria, maybe these fireflies could have
it a little easier too......");
MsgDisp("主人公","(｛風真＊＊｝......it doesn't seem like
you're talking about fireflies......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
