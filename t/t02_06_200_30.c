ChEyeOpenLevel(6,#1);
ChCheek(6,0);
BGMStop();
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
MsgDisp("主人公","I'm sorry...");
VoicePlay("T020620000_06_320");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
MsgDisp("Himuro","...Ah, I see.");
VoicePlay("T020620000_06_330");
ChEye(6,0);
ChMouth(6,0);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","Turns out, I should have given up.");
MsgDisp("主人公","Eh...?");
BGMPlay("BGM_C06_INORI_B",0.01);
Wait(40,0);
VoicePlay("T020620000_06_340");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
MsgDisp("Himuro","I have to complain to those two.
For causing you trouble, and hurting my
heart.");
VoicePlay("T020620000_06_350");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
MsgDisp("Himuro","I want them to take responsibility.");
MsgDisp("主人公","Ehh∋
That——");
VoicePlay("T020620000_06_360");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("Himuro","...It's a joke.
I'm really grateful.
And to you too, of course.");
VoicePlay("T020620000_06_370");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,8);
MsgDisp("Himuro","Everyone has graduated and from
tomorrow...
I'll be alone again.");
VoicePlay("T020620000_06_380");
ChEyeOpenLevel(6,0);
MsgDisp("Himuro","But, I have all the memories from
before...so it'll be alright.");
VoicePlay("T020620000_06_390");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,3);
MsgDisp("Himuro","Congratulations on graduating.");
VoicePlay("T020620000_06_400");
ChEye(6,2);
ChMouth(6,3);
ChMotion(6,3);
MsgDisp("Himuro","Farewell.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(6,0,0);
Wait(120);
