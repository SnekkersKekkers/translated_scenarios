MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc771",2);
ChLayout(1);
MsgClose();
ChOpen(5,34,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("R080500000_05_000");
MsgDisp("Hiiragi","｛主人公｝,
this is the last party here, huh.");
MsgDisp("主人公","｛柊＊＊＊｝, were you able to enjoy it?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("R080500000_05_010");
MsgDisp("Hiiragi","Yes. I get invited to many parties
because of my job, but this one 
was special.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("R080500000_05_020");
MsgDisp("Hiiragi","At Habataki High, I learned how
important it is that I have fun.");
MsgDisp("主人公","Yeah...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("R080500000_05_030");
MsgDisp("Hiiragi","Parties, school festivals and stage plays,
it's all the same...");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,8);
VoicePlay("R080500000_05_040");
MsgDisp("Hiiragi","I only thought about how guests
would see it...");
MsgDisp("主人公","Because you're an actor, ｛柊＊＊＊｝.");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,4);
ChMouth(5,4);
VoicePlay("R080500000_05_050");
MsgDisp("Hiiragi","Yeah, I never experienced being the guest.
So of course I'd never understand how the
guest would feel.");
MsgDisp("主人公","｛柊＊＊＊｝…");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("R080500000_05_060");
MsgDisp("Hiiragi","But this year, 
I purely enjoyed the party as a guest.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("R080500000_05_070");
MsgDisp("Hiiragi","Oh wait, please come here for a moment.");
MsgDisp("主人公","?");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
Wait(40,1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_XMAS_TRHEE",0.01);
StlOpen("ev_05_16");
StlEye(5,0);
StlMouth(5,0);
ScrFadeIn(0);
MsgDisp("主人公","Huh... ｛柊＊＊＊｝?");
StlEyeOpenLevel(5,5,1);
VoicePlay("R080500000_05_080");
MsgDisp("Hiiragi","It's a tree ornament that I couldn't
decorate yet.");
StlEyeOpenLevel(5,-1);
StlMouth(5,1);
VoicePlay("R080500000_05_090");
MsgDisp("Hiiragi","When I saw you today, you reminded
me of a pretty Christmas tree.");
StlEye(5,1);
VoicePlay("R080500000_05_100");
MsgDisp("Hiiragi","See, pretty just as I thought.");
VoicePlay("R080500000_39_000");
MsgDisp("Male Student A","Hm?
Is that Hiiragi up on stage?");
VoicePlay("R080500000_41_010");
MsgDisp("Male Student B","It is!
Is this a surprise play∋");
StlEye(5,2);
StlMouth(5,2);
VoicePlay("R080500000_05_110");
MsgDisp("Hiiragi","……！");
VoicePlay("R080500000_44_000");
MsgDisp("School Girl","Really∋　I want to see!");
SEPlay("EV_SE_741",1,0.3);
SEPlay("EV_SE_841",1,0.6);
Wait(30,1);
StlEye(5,1);
StlMouth(5,1);
VoicePlay("R080500000_05_120");
MsgDisp("Hiiragi","Shall we act for a bit?");
SEStop("EV_SE_741",2);
SEStop("EV_SE_841",2);
MsgDisp("主人公","Huh...Huuuh∋");
StlEye(5,0);
StlMouth(5,0);
VoicePlay("R080500000_05_130");
MsgDisp("Hiiragi","This holiday ornament that has been
with me since I was a child
is my other half.");
StlEyeOpenLevel(5,5,1);
StlMouth(5,2);
VoicePlay("R080500000_05_140");
MsgDisp("Hiiragi","As the guardian light of thou,
my soul belongs for eternity to only thou.");
SEPlay("EV_SE_741",0.5,0.7);
SEPlay("EV_SE_842",0,0.3);
VoicePlay("R080500000_39_030");
MsgDisp("Male Student A","Way to go!");
StlEyeOpenLevel(5,0,1);
Wait(3,0);
StlEye(5,1);
StlMouth(5,1);
MsgDisp("主人公","(T-This is embarrassing...!)");
SEStop("EV_SE_741",2);
SEStop("EV_SE_842",2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGMVol(0.5,2);
BGOpen("sc771",2);
ChLayout(1);
MsgClose();
ChOpen(5,34,4,4,4,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("R080500000_05_150");
MsgDisp("Hiiragi","My apologies. I guess I
can't fully be a guest after all.");
MsgDisp("主人公","Hehe!
It was a little embarrassing but
it was fun.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
ChCheek(5,7);
VoicePlay("R080500000_05_160");
MsgDisp("Hiiragi","Thank you, I had fun too.");
MsgClose();
BGMStop(2);
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(And just like that, my last 
Christmas Eve of my high school
life is over...)");
MsgClose();
ChPrmTblAdd(5,0);
